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

// Function: entry_0014b7d4
// Address: 0x14b7d4 - 0x14b848
void entry_0014b7d4_0x14b7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b7d4_0x14b7d4");
#endif

    switch (ctx->pc) {
        case 0x14b7f8u: goto label_14b7f8;
        case 0x14b804u: goto label_14b804;
        case 0x14b810u: goto label_14b810;
        case 0x14b81cu: goto label_14b81c;
        case 0x14b828u: goto label_14b828;
        default: break;
    }

    ctx->pc = 0x14b7d4u;

    // 0x14b7d4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x14b7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b7d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x14b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14b7dc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x14b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b7e0: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x14b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x14b7e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7e8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x14b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14b7ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b7f0: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B7F0u;
    SET_GPR_U32(ctx, 31, 0x14B7F8u);
    ctx->pc = 0x14B7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7F0u;
    // 0x14b7f4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B7F0u, 0x14B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7F8u;
label_14b7f8:
    // 0x14b7f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14b7fc: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B7FCu;
    SET_GPR_U32(ctx, 31, 0x14B804u);
    ctx->pc = 0x14B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7FCu;
    // 0x14b800: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B7FCu, 0x14B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B804u;
label_14b804:
    // 0x14b804: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14b804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14b808: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B808u;
    SET_GPR_U32(ctx, 31, 0x14B810u);
    ctx->pc = 0x14B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B808u;
    // 0x14b80c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B808u, 0x14B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B810u;
label_14b810:
    // 0x14b810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b814: 0xc050184  jal         func_140610
    ctx->pc = 0x14B814u;
    SET_GPR_U32(ctx, 31, 0x14B81Cu);
    ctx->pc = 0x14B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B814u;
    // 0x14b818: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x14B814u, 0x14B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B81Cu;
label_14b81c:
    // 0x14b81c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14b820: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B820u;
    SET_GPR_U32(ctx, 31, 0x14B828u);
    ctx->pc = 0x14B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B820u;
    // 0x14b824: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B820u, 0x14B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B828u;
label_14b828:
    // 0x14b828: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x14b828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x14b82c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x14b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x14b830: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x14b830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14b834: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14b834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14b838: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x14b838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14b83c: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x14b83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x14b840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B840u;
    {
        const bool branch_taken_0x14b840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B840u;
        // 0x14b844: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b840) {
            ctx->pc = 0x14B84Cu;
            return;
        }
    }
    ctx->pc = 0x14B848u;
}
