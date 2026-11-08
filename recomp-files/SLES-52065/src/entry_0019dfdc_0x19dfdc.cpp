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

// Function: entry_0019dfdc
// Address: 0x19dfdc - 0x19e028
void entry_0019dfdc_0x19dfdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dfdc_0x19dfdc");
#endif

    switch (ctx->pc) {
        case 0x19e020u: goto label_19e020;
        default: break;
    }

    ctx->pc = 0x19dfdcu;

    // 0x19dfdc: 0x0  nop
    ctx->pc = 0x19dfdcu;
    // NOP
    // 0x19dfe0: 0x2b71821  addu        $v1, $s5, $s7
    ctx->pc = 0x19dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x19dfe4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x19dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x19dfe8: 0x8c830784  lw          $v1, 0x784($a0)
    ctx->pc = 0x19dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1924)));
    // 0x19dfec: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19DFECu;
    {
        const bool branch_taken_0x19dfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFECu;
        // 0x19dff0: 0x24930784  addiu       $s3, $a0, 0x784 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1924));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfec) {
            ctx->pc = 0x19E028u;
            return;
        }
    }
    ctx->pc = 0x19DFF4u;
    // 0x19dff4: 0x8c850684  lw          $a1, 0x684($a0)
    ctx->pc = 0x19dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1668)));
    // 0x19dff8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19dffc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x19dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19e000: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19e000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e004: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19e004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x19e008: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x19e00c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E00Cu;
    {
        const bool branch_taken_0x19e00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E00Cu;
        // 0x19e010: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e00c) {
            ctx->pc = 0x19E028u;
            return;
        }
    }
    ctx->pc = 0x19E014u;
    // 0x19e014: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19e014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e018: 0xc064d78  jal         func_1935E0
    ctx->pc = 0x19E018u;
    SET_GPR_U32(ctx, 31, 0x19E020u);
    ctx->pc = 0x19E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E018u;
    // 0x19e01c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1935E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1935E0u, 0x19E018u, 0x19E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E020u;
label_19e020:
    // 0x19e020: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e024: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x19e024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19e028u;
}
