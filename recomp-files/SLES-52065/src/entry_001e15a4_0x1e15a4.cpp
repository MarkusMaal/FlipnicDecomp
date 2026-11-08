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

// Function: entry_001e15a4
// Address: 0x1e15a4 - 0x1e15d4
void entry_001e15a4_0x1e15a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e15a4_0x1e15a4");
#endif

    switch (ctx->pc) {
        case 0x1e15acu: goto label_1e15ac;
        case 0x1e15b4u: goto label_1e15b4;
        case 0x1e15bcu: goto label_1e15bc;
        default: break;
    }

    ctx->pc = 0x1e15a4u;

    // 0x1e15a4: 0xc07fb18  jal         func_1FEC60
    ctx->pc = 0x1E15A4u;
    SET_GPR_U32(ctx, 31, 0x1E15ACu);
    ctx->pc = 0x1E15A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15A4u;
    // 0x1e15a8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC60u, 0x1E15A4u, 0x1E15ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15ACu;
label_1e15ac:
    // 0x1e15ac: 0xc07fb18  jal         func_1FEC60
    ctx->pc = 0x1E15ACu;
    SET_GPR_U32(ctx, 31, 0x1E15B4u);
    ctx->pc = 0x1E15B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15ACu;
    // 0x1e15b0: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC60u, 0x1E15ACu, 0x1E15B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15B4u;
label_1e15b4:
    // 0x1e15b4: 0xc07fb18  jal         func_1FEC60
    ctx->pc = 0x1E15B4u;
    SET_GPR_U32(ctx, 31, 0x1E15BCu);
    ctx->pc = 0x1E15B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15B4u;
    // 0x1e15b8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC60u, 0x1E15B4u, 0x1E15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15BCu;
label_1e15bc:
    // 0x1e15bc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e15bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e15c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e15c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e15c4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E15C4u;
    {
        const bool branch_taken_0x1e15c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15C4u;
        // 0x1e15c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15c4) {
            ctx->pc = 0x1E15D8u;
            return;
        }
    }
    ctx->pc = 0x1E15CCu;
    // 0x1e15cc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E15CCu;
    SET_GPR_U32(ctx, 31, 0x1E15D4u);
    ctx->pc = 0x1E15D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15CCu;
    // 0x1e15d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E15CCu, 0x1E15D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15D4u;
}
