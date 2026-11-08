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

// Function: entry_00202d78
// Address: 0x202d78 - 0x202dd8
void entry_00202d78_0x202d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202d78_0x202d78");
#endif

    switch (ctx->pc) {
        case 0x202d98u: goto label_202d98;
        case 0x202db0u: goto label_202db0;
        case 0x202db8u: goto label_202db8;
        case 0x202dc0u: goto label_202dc0;
        case 0x202dd4u: goto label_202dd4;
        default: break;
    }

    ctx->pc = 0x202d78u;

    // 0x202d78: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x202d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x202d7c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x202d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x202d80: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x202D80u;
    {
        const bool branch_taken_0x202d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202d80) {
            ctx->pc = 0x202DD8u;
            return;
        }
    }
    ctx->pc = 0x202D88u;
    // 0x202d88: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x202d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x202d8c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x202d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x202d90: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202D90u;
    SET_GPR_U32(ctx, 31, 0x202D98u);
    ctx->pc = 0x202D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202D90u;
    // 0x202d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202D90u, 0x202D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202D98u;
label_202d98:
    // 0x202d98: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x202D98u;
    {
        const bool branch_taken_0x202d98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x202d98) {
            ctx->pc = 0x202DD8u;
            return;
        }
    }
    ctx->pc = 0x202DA0u;
    // 0x202da0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x202da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x202da4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x202da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x202da8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202DA8u;
    SET_GPR_U32(ctx, 31, 0x202DB0u);
    ctx->pc = 0x202DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DA8u;
    // 0x202dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202DA8u, 0x202DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DB0u;
label_202db0:
    // 0x202db0: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x202DB0u;
    SET_GPR_U32(ctx, 31, 0x202DB8u);
    ctx->pc = 0x202DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DB0u;
    // 0x202db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x202DB0u, 0x202DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DB8u;
label_202db8:
    // 0x202db8: 0xc08218c  jal         func_208630
    ctx->pc = 0x202DB8u;
    SET_GPR_U32(ctx, 31, 0x202DC0u);
    ctx->pc = 0x202DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DB8u;
    // 0x202dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x202DB8u, 0x202DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DC0u;
label_202dc0:
    // 0x202dc0: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x202DC0u;
    {
        const bool branch_taken_0x202dc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x202DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DC0u;
        // 0x202dc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dc0) {
            ctx->pc = 0x202DD8u;
            return;
        }
    }
    ctx->pc = 0x202DC8u;
    // 0x202dc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202dcc: 0xc082014  jal         func_208050
    ctx->pc = 0x202DCCu;
    SET_GPR_U32(ctx, 31, 0x202DD4u);
    ctx->pc = 0x202DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DCCu;
    // 0x202dd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x202DCCu, 0x202DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DD4u;
label_202dd4:
    // 0x202dd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x202dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202dd8u;
}
