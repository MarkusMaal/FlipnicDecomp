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

// Function: entry_001f92cc
// Address: 0x1f92cc - 0x1f9338
void entry_001f92cc_0x1f92cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f92cc_0x1f92cc");
#endif

    switch (ctx->pc) {
        case 0x1f92e0u: goto label_1f92e0;
        case 0x1f9320u: goto label_1f9320;
        default: break;
    }

    ctx->pc = 0x1f92ccu;

    // 0x1f92cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f92ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92d0: 0x261016c4  addiu       $s0, $s0, 0x16C4
    ctx->pc = 0x1f92d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5828));
    // 0x1f92d4: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1f92d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1f92d8: 0xc080804  jal         func_202010
    ctx->pc = 0x1F92D8u;
    SET_GPR_U32(ctx, 31, 0x1F92E0u);
    ctx->pc = 0x1F92DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F92D8u;
    // 0x1f92dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F92D8u, 0x1F92E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F92E0u;
label_1f92e0:
    // 0x1f92e0: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1f92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1f92e4: 0xae13ffec  sw          $s3, -0x14($s0)
    ctx->pc = 0x1f92e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 19));
    // 0x1f92e8: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x1f92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x1f92ec: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f92ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f92f0: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x1f92f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f92f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f92f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92f8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1f92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1f92fc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1f92fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9300: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f9300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f9304: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f9304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f9308: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f9308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f930c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f930cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9310: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f9310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f9314: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f9314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f9318: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F9318u;
    SET_GPR_U32(ctx, 31, 0x1F9320u);
    ctx->pc = 0x1F931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9318u;
    // 0x1f931c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F9318u, 0x1F9320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9320u;
label_1f9320:
    // 0x1f9320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9324: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9324u;
    {
        const bool branch_taken_0x1f9324 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9324u;
        // 0x1f9328: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9324) {
            ctx->pc = 0x1F9338u;
            return;
        }
    }
    ctx->pc = 0x1F932Cu;
    // 0x1f932c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1f932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f9330: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9330u;
    {
        const bool branch_taken_0x1f9330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9330u;
        // 0x1f9334: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9330) {
            ctx->pc = 0x1F9340u;
            return;
        }
    }
    ctx->pc = 0x1F9338u;
}
