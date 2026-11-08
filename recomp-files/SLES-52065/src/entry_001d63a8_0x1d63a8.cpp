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

// Function: entry_001d63a8
// Address: 0x1d63a8 - 0x1d6418
void entry_001d63a8_0x1d63a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d63a8_0x1d63a8");
#endif

    switch (ctx->pc) {
        case 0x1d63c0u: goto label_1d63c0;
        case 0x1d63ccu: goto label_1d63cc;
        case 0x1d63e0u: goto label_1d63e0;
        case 0x1d63ecu: goto label_1d63ec;
        case 0x1d640cu: goto label_1d640c;
        default: break;
    }

    ctx->pc = 0x1d63a8u;

    // 0x1d63a8: 0x623fff3  bgezl       $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D63A8u;
    {
        const bool branch_taken_0x1d63a8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1d63a8) {
            ctx->pc = 0x1D63ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D63A8u;
            // 0x1d63ac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6378u;
            return;
        }
    }
    ctx->pc = 0x1D63B0u;
    // 0x1d63b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d63b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d63b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d63b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d63b8: 0xc080664  jal         func_201990
    ctx->pc = 0x1D63B8u;
    SET_GPR_U32(ctx, 31, 0x1D63C0u);
    ctx->pc = 0x1D63BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63B8u;
    // 0x1d63bc: 0x24a535e0  addiu       $a1, $a1, 0x35E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D63B8u, 0x1D63C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63C0u;
label_1d63c0:
    // 0x1d63c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d63c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d63c4: 0xc080664  jal         func_201990
    ctx->pc = 0x1D63C4u;
    SET_GPR_U32(ctx, 31, 0x1D63CCu);
    ctx->pc = 0x1D63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63C4u;
    // 0x1d63c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D63C4u, 0x1D63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63CCu;
label_1d63cc:
    // 0x1d63cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d63ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d63d0: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x1d63d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d63d4: 0x24a535e8  addiu       $a1, $a1, 0x35E8
    ctx->pc = 0x1d63d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13800));
    // 0x1d63d8: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D63D8u;
    SET_GPR_U32(ctx, 31, 0x1D63E0u);
    ctx->pc = 0x1D63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63D8u;
    // 0x1d63dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D63D8u, 0x1D63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63E0u;
label_1d63e0:
    // 0x1d63e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d63e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d63e4: 0xc080664  jal         func_201990
    ctx->pc = 0x1D63E4u;
    SET_GPR_U32(ctx, 31, 0x1D63ECu);
    ctx->pc = 0x1D63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63E4u;
    // 0x1d63e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D63E4u, 0x1D63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63ECu;
label_1d63ec:
    // 0x1d63ec: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x1d63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1d63f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d63f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d63f4: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D63F4u;
    {
        const bool branch_taken_0x1d63f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d63f4) {
            ctx->pc = 0x1D63F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D63F4u;
            // 0x1d63f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6418u;
            return;
        }
    }
    ctx->pc = 0x1D63FCu;
    // 0x1d63fc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d63fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6400: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6404: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6404u;
    SET_GPR_U32(ctx, 31, 0x1D640Cu);
    ctx->pc = 0x1D6408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6404u;
    // 0x1d6408: 0x24a53600  addiu       $a1, $a1, 0x3600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6404u, 0x1D640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D640Cu;
label_1d640c:
    // 0x1d640c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D640Cu;
    {
        const bool branch_taken_0x1d640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D640Cu;
        // 0x1d6410: 0x8ea80258  lw          $t0, 0x258($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d640c) {
            ctx->pc = 0x1D6468u;
            return;
        }
    }
    ctx->pc = 0x1D6414u;
    // 0x1d6414: 0x0  nop
    ctx->pc = 0x1d6414u;
    // NOP
    ctx->pc = 0x1d6418u;
}
