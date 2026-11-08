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

// Function: entry_001f8394
// Address: 0x1f8394 - 0x1f83dc
void entry_001f8394_0x1f8394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8394_0x1f8394");
#endif

    switch (ctx->pc) {
        case 0x1f83c4u: goto label_1f83c4;
        default: break;
    }

    ctx->pc = 0x1f8394u;

    // 0x1f8394: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f8394u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f8398: 0x24e71680  addiu       $a3, $a3, 0x1680
    ctx->pc = 0x1f8398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5760));
    // 0x1f839c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83a0: 0xacf00014  sw          $s0, 0x14($a3)
    ctx->pc = 0x1f83a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 16));
    // 0x1f83a4: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f83a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f83a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f83a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f83ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1f83acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f83b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f83b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f83b4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f83b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f83b8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f83b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f83bc: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F83BCu;
    SET_GPR_U32(ctx, 31, 0x1F83C4u);
    ctx->pc = 0x1F83C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F83BCu;
    // 0x1f83c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F83BCu, 0x1F83C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F83C4u;
label_1f83c4:
    // 0x1f83c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f83c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83c8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F83C8u;
    {
        const bool branch_taken_0x1f83c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F83CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83C8u;
        // 0x1f83cc: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83c8) {
            ctx->pc = 0x1F83DCu;
            return;
        }
    }
    ctx->pc = 0x1F83D0u;
    // 0x1f83d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1f83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f83d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F83D4u;
    {
        const bool branch_taken_0x1f83d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83D4u;
        // 0x1f83d8: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83d4) {
            ctx->pc = 0x1F83E4u;
            return;
        }
    }
    ctx->pc = 0x1F83DCu;
}
