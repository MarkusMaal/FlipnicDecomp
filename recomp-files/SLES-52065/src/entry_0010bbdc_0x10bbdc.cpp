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

// Function: entry_0010bbdc
// Address: 0x10bbdc - 0x10bc2c
void entry_0010bbdc_0x10bbdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bbdc_0x10bbdc");
#endif

    ctx->pc = 0x10bbdcu;

    // 0x10bbdc: 0x0  nop
    ctx->pc = 0x10bbdcu;
    // NOP
    // 0x10bbe0: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x10bbe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x10bbe4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x10BBE4u;
    {
        const bool branch_taken_0x10bbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bbe4) {
            ctx->pc = 0x10BBB4u;
            return;
        }
    }
    ctx->pc = 0x10BBECu;
    // 0x10bbec: 0x8e03231c  lw          $v1, 0x231C($s0)
    ctx->pc = 0x10bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    // 0x10bbf0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x10BBF0u;
    {
        const bool branch_taken_0x10bbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bbf0) {
            ctx->pc = 0x10BC80u;
            return;
        }
    }
    ctx->pc = 0x10BBF8u;
    // 0x10bbf8: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x10bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x10bbfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bc00: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x10BC00u;
    {
        const bool branch_taken_0x10bc00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10bc00) {
            ctx->pc = 0x10BC5Cu;
            return;
        }
    }
    ctx->pc = 0x10BC08u;
    // 0x10bc08: 0xae0043e0  sw          $zero, 0x43E0($s0)
    ctx->pc = 0x10bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17376), GPR_U32(ctx, 0));
    // 0x10bc0c: 0x8e0543d8  lw          $a1, 0x43D8($s0)
    ctx->pc = 0x10bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17368)));
    // 0x10bc10: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BC10u;
    {
        const bool branch_taken_0x10bc10 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10bc10) {
            ctx->pc = 0x10BC2Cu;
            return;
        }
    }
    ctx->pc = 0x10BC18u;
    // 0x10bc18: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
    // 0x10bc1c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10bc20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10bc24: 0xc046744  jal         func_119D10
    ctx->pc = 0x10BC24u;
    SET_GPR_U32(ctx, 31, 0x10BC2Cu);
    ctx->pc = 0x10BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC24u;
    // 0x10bc28: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10BC24u, 0x10BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC2Cu;
}
