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

// Function: entry_001f9794
// Address: 0x1f9794 - 0x1f97e4
void entry_001f9794_0x1f9794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9794_0x1f9794");
#endif

    switch (ctx->pc) {
        case 0x1f97ccu: goto label_1f97cc;
        default: break;
    }

    ctx->pc = 0x1f9794u;

    // 0x1f9794: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f9794u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f9798: 0x24421680  addiu       $v0, $v0, 0x1680
    ctx->pc = 0x1f9798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x1f979c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f97a0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1f97a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1f97a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f97a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f97a8: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1f97a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1f97ac: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f97acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f97b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f97b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f97b4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1f97b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f97b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f97b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f97bc: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f97bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f97c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f97c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f97c4: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F97C4u;
    SET_GPR_U32(ctx, 31, 0x1F97CCu);
    ctx->pc = 0x1F97C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F97C4u;
    // 0x1f97c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F97C4u, 0x1F97CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F97CCu;
label_1f97cc:
    // 0x1f97cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f97ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f97d0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F97D0u;
    {
        const bool branch_taken_0x1f97d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97D0u;
        // 0x1f97d4: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97d0) {
            ctx->pc = 0x1F97E4u;
            return;
        }
    }
    ctx->pc = 0x1F97D8u;
    // 0x1f97d8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1f97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f97dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F97DCu;
    {
        const bool branch_taken_0x1f97dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97DCu;
        // 0x1f97e0: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97dc) {
            ctx->pc = 0x1F97ECu;
            return;
        }
    }
    ctx->pc = 0x1F97E4u;
}
