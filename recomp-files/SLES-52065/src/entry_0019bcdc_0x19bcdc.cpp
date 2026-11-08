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

// Function: entry_0019bcdc
// Address: 0x19bcdc - 0x19bd30
void entry_0019bcdc_0x19bcdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bcdc_0x19bcdc");
#endif

    switch (ctx->pc) {
        case 0x19bcf0u: goto label_19bcf0;
        default: break;
    }

    ctx->pc = 0x19bcdcu;

    // 0x19bcdc: 0x0  nop
    ctx->pc = 0x19bcdcu;
    // NOP
    // 0x19bce0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x19bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x19bce4: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19bce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x19bce8: 0xc057040  jal         func_15C100
    ctx->pc = 0x19BCE8u;
    SET_GPR_U32(ctx, 31, 0x19BCF0u);
    ctx->pc = 0x19BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BCE8u;
    // 0x19bcec: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19BCE8u, 0x19BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCF0u;
label_19bcf0:
    // 0x19bcf0: 0x8e24069c  lw          $a0, 0x69C($s1)
    ctx->pc = 0x19bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x19bcf4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19bcf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19bcfc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19bd00: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x19bd04: 0xac6206a0  sw          $v0, 0x6A0($v1)
    ctx->pc = 0x19bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1696), GPR_U32(ctx, 2));
    // 0x19bd08: 0x8e23069c  lw          $v1, 0x69C($s1)
    ctx->pc = 0x19bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x19bd0c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19bd10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bd14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19bd18: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19bd1c: 0xac5206a8  sw          $s2, 0x6A8($v0)
    ctx->pc = 0x19bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 18));
    // 0x19bd20: 0x8e22069c  lw          $v0, 0x69C($s1)
    ctx->pc = 0x19bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x19bd24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19bd28: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x19BD28u;
    {
        const bool branch_taken_0x19bd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD28u;
        // 0x19bd2c: 0xae22069c  sw          $v0, 0x69C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd28) {
            ctx->pc = 0x19BDE4u;
            return;
        }
    }
    ctx->pc = 0x19BD30u;
}
