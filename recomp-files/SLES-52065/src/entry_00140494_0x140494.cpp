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

// Function: entry_00140494
// Address: 0x140494 - 0x140508
void entry_00140494_0x140494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140494_0x140494");
#endif

    switch (ctx->pc) {
        case 0x1404b8u: goto label_1404b8;
        case 0x1404c4u: goto label_1404c4;
        case 0x1404d0u: goto label_1404d0;
        case 0x1404dcu: goto label_1404dc;
        case 0x1404e8u: goto label_1404e8;
        default: break;
    }

    ctx->pc = 0x140494u;

    // 0x140494: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x140494u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140498: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x140498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14049c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x14049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1404a0: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x1404a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1404a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1404a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404a8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1404a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1404ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1404acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1404b0: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1404B0u;
    SET_GPR_U32(ctx, 31, 0x1404B8u);
    ctx->pc = 0x1404B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404B0u;
    // 0x1404b4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1404B0u, 0x1404B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404B8u;
label_1404b8:
    // 0x1404b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1404b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1404bc: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1404BCu;
    SET_GPR_U32(ctx, 31, 0x1404C4u);
    ctx->pc = 0x1404C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404BCu;
    // 0x1404c0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1404BCu, 0x1404C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404C4u;
label_1404c4:
    // 0x1404c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1404c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1404c8: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1404C8u;
    SET_GPR_U32(ctx, 31, 0x1404D0u);
    ctx->pc = 0x1404CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404C8u;
    // 0x1404cc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1404C8u, 0x1404D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404D0u;
label_1404d0:
    // 0x1404d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1404d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404d4: 0xc050184  jal         func_140610
    ctx->pc = 0x1404D4u;
    SET_GPR_U32(ctx, 31, 0x1404DCu);
    ctx->pc = 0x1404D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404D4u;
    // 0x1404d8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x1404D4u, 0x1404DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404DCu;
label_1404dc:
    // 0x1404dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1404dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1404e0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1404E0u;
    SET_GPR_U32(ctx, 31, 0x1404E8u);
    ctx->pc = 0x1404E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404E0u;
    // 0x1404e4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1404E0u, 0x1404E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404E8u;
label_1404e8:
    // 0x1404e8: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x1404e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1404ec: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1404ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1404f0: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x1404f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1404f4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1404f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1404f8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1404f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1404fc: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1404fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x140500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x140500u;
    {
        const bool branch_taken_0x140500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140500u;
        // 0x140504: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140500) {
            ctx->pc = 0x14050Cu;
            return;
        }
    }
    ctx->pc = 0x140508u;
}
