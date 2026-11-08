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

// Function: entry_001986e0
// Address: 0x1986e0 - 0x198718
void entry_001986e0_0x1986e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001986e0_0x1986e0");
#endif

    switch (ctx->pc) {
        case 0x198708u: goto label_198708;
        default: break;
    }

    ctx->pc = 0x1986e0u;

    // 0x1986e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1986e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1986e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1986e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1986e8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1986E8u;
    {
        const bool branch_taken_0x1986e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1986e8) {
            ctx->pc = 0x198718u;
            return;
        }
    }
    ctx->pc = 0x1986F0u;
    // 0x1986f0: 0x2b29821  addu        $s3, $s5, $s2
    ctx->pc = 0x1986f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1986f4: 0xae600678  sw          $zero, 0x678($s3)
    ctx->pc = 0x1986f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1656), GPR_U32(ctx, 0));
    // 0x1986f8: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1986f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1986fc: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1986fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x198700: 0xc057040  jal         func_15C100
    ctx->pc = 0x198700u;
    SET_GPR_U32(ctx, 31, 0x198708u);
    ctx->pc = 0x198704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198700u;
    // 0x198704: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x198700u, 0x198708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198708u;
label_198708:
    // 0x198708: 0xae620450  sw          $v0, 0x450($s3)
    ctx->pc = 0x198708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1104), GPR_U32(ctx, 2));
    // 0x19870c: 0xae710490  sw          $s1, 0x490($s3)
    ctx->pc = 0x19870cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1168), GPR_U32(ctx, 17));
    // 0x198710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x198710u;
    {
        const bool branch_taken_0x198710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198710u;
        // 0x198714: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198710) {
            ctx->pc = 0x198720u;
            return;
        }
    }
    ctx->pc = 0x198718u;
}
