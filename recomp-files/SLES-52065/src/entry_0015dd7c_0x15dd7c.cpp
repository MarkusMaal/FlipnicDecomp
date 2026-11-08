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

// Function: entry_0015dd7c
// Address: 0x15dd7c - 0x15dde8
void entry_0015dd7c_0x15dd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dd7c_0x15dd7c");
#endif

    switch (ctx->pc) {
        case 0x15ddacu: goto label_15ddac;
        case 0x15ddb8u: goto label_15ddb8;
        case 0x15ddc4u: goto label_15ddc4;
        default: break;
    }

    ctx->pc = 0x15dd7cu;

    // 0x15dd7c: 0x8ea42c1c  lw          $a0, 0x2C1C($s5)
    ctx->pc = 0x15dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15dd80: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x15dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x15dd84: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x15dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15dd88: 0x84b0000c  lh          $s0, 0xC($a1)
    ctx->pc = 0x15dd88u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15dd8c: 0x84a4000a  lh          $a0, 0xA($a1)
    ctx->pc = 0x15dd8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x15dd90: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x15dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15dd94: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x15dd94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15dd98: 0x142000f5  bnez        $at, . + 4 + (0xF5 << 2)
    ctx->pc = 0x15DD98u;
    {
        const bool branch_taken_0x15dd98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD98u;
        // 0x15dd9c: 0x64a021  addu        $s4, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd98) {
            ctx->pc = 0x15E170u;
            return;
        }
    }
    ctx->pc = 0x15DDA0u;
    // 0x15dda0: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x15dda0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15dda4: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15DDA4u;
    SET_GPR_U32(ctx, 31, 0x15DDACu);
    ctx->pc = 0x15DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDA4u;
    // 0x15dda8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15DDA4u, 0x15DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDACu;
label_15ddac:
    // 0x15ddac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15ddacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddb0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15DDB0u;
    SET_GPR_U32(ctx, 31, 0x15DDB8u);
    ctx->pc = 0x15DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDB0u;
    // 0x15ddb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15DDB0u, 0x15DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDB8u;
label_15ddb8:
    // 0x15ddb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ddb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddbc: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15DDBCu;
    SET_GPR_U32(ctx, 31, 0x15DDC4u);
    ctx->pc = 0x15DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDBCu;
    // 0x15ddc0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15DDBCu, 0x15DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDC4u;
label_15ddc4:
    // 0x15ddc4: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15ddc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15ddc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15ddc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddcc: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
    ctx->pc = 0x15DDCCu;
    {
        const bool branch_taken_0x15ddcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDCCu;
        // 0x15ddd0: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ddcc) {
            ctx->pc = 0x15DFB0u;
            return;
        }
    }
    ctx->pc = 0x15DDD4u;
    // 0x15ddd4: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x15ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x15ddd8: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15ddd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15dddc: 0x14200060  bnez        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x15DDDCu;
    {
        const bool branch_taken_0x15dddc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDDCu;
        // 0x15dde0: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dddc) {
            ctx->pc = 0x15DF60u;
            return;
        }
    }
    ctx->pc = 0x15DDE4u;
    // 0x15dde4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x15dde4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15dde8u;
}
