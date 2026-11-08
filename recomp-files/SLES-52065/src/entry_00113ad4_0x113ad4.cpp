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

// Function: entry_00113ad4
// Address: 0x113ad4 - 0x113b28
void entry_00113ad4_0x113ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113ad4_0x113ad4");
#endif

    switch (ctx->pc) {
        case 0x113b00u: goto label_113b00;
        case 0x113b10u: goto label_113b10;
        default: break;
    }

    ctx->pc = 0x113ad4u;

    // 0x113ad4: 0x0  nop
    ctx->pc = 0x113ad4u;
    // NOP
    // 0x113ad8: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x113ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x113adc: 0x8e14024c  lw          $s4, 0x24C($s0)
    ctx->pc = 0x113adcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x113ae0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113ae4: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113ae8: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58
    ctx->pc = 0x113ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    // 0x113aec: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x113aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113af0: 0x24070089  addiu       $a3, $zero, 0x89
    ctx->pc = 0x113af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x113af4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x113af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113af8: 0xc057090  jal         func_15C240
    ctx->pc = 0x113AF8u;
    SET_GPR_U32(ctx, 31, 0x113B00u);
    ctx->pc = 0x113AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AF8u;
    // 0x113afc: 0x24530088  addiu       $s3, $v0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C240u, 0x113AF8u, 0x113B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B00u;
label_113b00:
    // 0x113b00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x113b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b04: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x113b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x113b08: 0xc040168  jal         func_1005A0
    ctx->pc = 0x113B08u;
    SET_GPR_U32(ctx, 31, 0x113B10u);
    ctx->pc = 0x113B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B08u;
    // 0x113b0c: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x113B08u, 0x113B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B10u;
label_113b10:
    // 0x113b10: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x113b10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x113b14: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x113b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x113b18: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x113b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113b1c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x113B1Cu;
    {
        const bool branch_taken_0x113b1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B1Cu;
        // 0x113b20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b1c) {
            ctx->pc = 0x113B6Cu;
            return;
        }
    }
    ctx->pc = 0x113B24u;
    // 0x113b24: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x113b24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113b28u;
}
