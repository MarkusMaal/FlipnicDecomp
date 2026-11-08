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

// Function: entry_001dddf0
// Address: 0x1dddf0 - 0x1dde58
void entry_001dddf0_0x1dddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dddf0_0x1dddf0");
#endif

    ctx->pc = 0x1dddf0u;

    // 0x1dddf0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1dddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dddf4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1dddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1dddf8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DDDF8u;
    {
        const bool branch_taken_0x1dddf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dddf8) {
            ctx->pc = 0x1DDDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDDF8u;
            // 0x1dddfc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE6Cu;
            return;
        }
    }
    ctx->pc = 0x1DDE00u;
    // 0x1dde00: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1dde00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1dde04: 0x14520018  bne         $v0, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DDE04u;
    {
        const bool branch_taken_0x1dde04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1DDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE04u;
        // 0x1dde08: 0x25040010  addiu       $a0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde04) {
            ctx->pc = 0x1DDE68u;
            return;
        }
    }
    ctx->pc = 0x1DDE0Cu;
    // 0x1dde0c: 0x25420004  addiu       $v0, $t2, 0x4
    ctx->pc = 0x1dde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1dde10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dde10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dde14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dde14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dde18: 0x14710013  bne         $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DDE18u;
    {
        const bool branch_taken_0x1dde18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x1DDE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE18u;
        // 0x1dde1c: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde18) {
            ctx->pc = 0x1DDE68u;
            return;
        }
    }
    ctx->pc = 0x1DDE20u;
    // 0x1dde20: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1dde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1dde24: 0x54500011  bnel        $v0, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DDE24u;
    {
        const bool branch_taken_0x1dde24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1dde24) {
            ctx->pc = 0x1DDE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDE24u;
            // 0x1dde28: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE6Cu;
            return;
        }
    }
    ctx->pc = 0x1DDE2Cu;
    // 0x1dde2c: 0xad2024  and         $a0, $a1, $t5
    ctx->pc = 0x1dde2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x1dde30: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1dde30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1dde34: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x1dde34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde38: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1dde38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1dde3c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1dde3cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1dde40: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x1dde40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1dde44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDE44u;
    {
        const bool branch_taken_0x1dde44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE44u;
        // 0x1dde48: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde44) {
            ctx->pc = 0x1DDE58u;
            return;
        }
    }
    ctx->pc = 0x1DDE4Cu;
    // 0x1dde4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDE4Cu;
    {
        const bool branch_taken_0x1dde4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE4Cu;
        // 0x1dde50: 0xc91004  sllv        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde4c) {
            ctx->pc = 0x1DDE60u;
            return;
        }
    }
    ctx->pc = 0x1DDE54u;
    // 0x1dde54: 0x0  nop
    ctx->pc = 0x1dde54u;
    // NOP
    ctx->pc = 0x1dde58u;
}
