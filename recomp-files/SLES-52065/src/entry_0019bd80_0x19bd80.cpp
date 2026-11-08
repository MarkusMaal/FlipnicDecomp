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

// Function: entry_0019bd80
// Address: 0x19bd80 - 0x19bdd0
void entry_0019bd80_0x19bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bd80_0x19bd80");
#endif

    switch (ctx->pc) {
        case 0x19bd90u: goto label_19bd90;
        default: break;
    }

    ctx->pc = 0x19bd80u;

    // 0x19bd80: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x19bd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x19bd84: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19bd84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x19bd88: 0xc057040  jal         func_15C100
    ctx->pc = 0x19BD88u;
    SET_GPR_U32(ctx, 31, 0x19BD90u);
    ctx->pc = 0x19BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD88u;
    // 0x19bd8c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19BD88u, 0x19BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD90u;
label_19bd90:
    // 0x19bd90: 0x8e240760  lw          $a0, 0x760($s1)
    ctx->pc = 0x19bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1888)));
    // 0x19bd94: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19bd98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19bd9c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19bda0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x19bda4: 0xac620764  sw          $v0, 0x764($v1)
    ctx->pc = 0x19bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1892), GPR_U32(ctx, 2));
    // 0x19bda8: 0x8e230760  lw          $v1, 0x760($s1)
    ctx->pc = 0x19bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1888)));
    // 0x19bdac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19bdb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bdb4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19bdb8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19bdbc: 0xac52076c  sw          $s2, 0x76C($v0)
    ctx->pc = 0x19bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1900), GPR_U32(ctx, 18));
    // 0x19bdc0: 0x8e220760  lw          $v0, 0x760($s1)
    ctx->pc = 0x19bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1888)));
    // 0x19bdc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19bdc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19BDC8u;
    {
        const bool branch_taken_0x19bdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDC8u;
        // 0x19bdcc: 0xae220760  sw          $v0, 0x760($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bdc8) {
            ctx->pc = 0x19BDE4u;
            return;
        }
    }
    ctx->pc = 0x19BDD0u;
}
