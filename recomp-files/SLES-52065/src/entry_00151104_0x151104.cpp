#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00151104
// Address: 0x151104 - 0x151178
void entry_00151104_0x151104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151104_0x151104");
#endif

    switch (ctx->pc) {
        case 0x151128u: goto label_151128;
        case 0x151134u: goto label_151134;
        case 0x151140u: goto label_151140;
        case 0x15114cu: goto label_15114c;
        case 0x151158u: goto label_151158;
        default: break;
    }

    ctx->pc = 0x151104u;

    // 0x151104: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x151104u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151108: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x151108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15110c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x15110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x151110: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x151110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x151114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151118: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x151118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15111c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15111cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151120: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x151120u;
    SET_GPR_U32(ctx, 31, 0x151128u);
    ctx->pc = 0x151124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151120u;
    // 0x151124: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x151120u, 0x151128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151128u;
label_151128:
    // 0x151128: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x151128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15112c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x15112Cu;
    SET_GPR_U32(ctx, 31, 0x151134u);
    ctx->pc = 0x151130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15112Cu;
    // 0x151130: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x15112Cu, 0x151134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151134u;
label_151134:
    // 0x151134: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x151134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x151138: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x151138u;
    SET_GPR_U32(ctx, 31, 0x151140u);
    ctx->pc = 0x15113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151138u;
    // 0x15113c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x151138u, 0x151140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151140u;
label_151140:
    // 0x151140: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151144: 0xc050184  jal         func_140610
    ctx->pc = 0x151144u;
    SET_GPR_U32(ctx, 31, 0x15114Cu);
    ctx->pc = 0x151148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151144u;
    // 0x151148: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x151144u, 0x15114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15114Cu;
label_15114c:
    // 0x15114c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x151150: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x151150u;
    SET_GPR_U32(ctx, 31, 0x151158u);
    ctx->pc = 0x151154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151150u;
    // 0x151154: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x151150u, 0x151158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151158u;
label_151158:
    // 0x151158: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x151158u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x15115c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x15115cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x151160: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x151160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151164: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x151164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x151168: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x151168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15116c: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x15116cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x151170: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x151170u;
    {
        const bool branch_taken_0x151170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151170u;
        // 0x151174: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151170) {
            ctx->pc = 0x15117Cu;
            return;
        }
    }
    ctx->pc = 0x151178u;
}
