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

// Function: entry_0015df6c
// Address: 0x15df6c - 0x15dfb0
void entry_0015df6c_0x15df6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015df6c_0x15df6c");
#endif

    ctx->pc = 0x15df6cu;

label_15df6c:
    // 0x15df6c: 0x0  nop
    ctx->pc = 0x15df6cu;
    // NOP
    // 0x15df70: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x15df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15df74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15df74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15df78: 0x2272021  addu        $a0, $s1, $a3
    ctx->pc = 0x15df78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x15df7c: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x15df7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15df80: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x15df80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x15df84: 0x8cc52cd8  lw          $a1, 0x2CD8($a2)
    ctx->pc = 0x15df84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x15df88: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x15df88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x15df8c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x15df8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x15df90: 0xc4a00200  lwc1        $f0, 0x200($a1)
    ctx->pc = 0x15df90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15df94: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x15df94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15df98: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x15df98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x15df9c: 0x8cc42cd8  lw          $a0, 0x2CD8($a2)
    ctx->pc = 0x15df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x15dfa0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x15dfa0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x15dfa4: 0x1b0102a  slt         $v0, $t5, $s0
    ctx->pc = 0x15dfa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15dfa8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15DFA8u;
    {
        const bool branch_taken_0x15dfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFA8u;
        // 0x15dfac: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfa8) {
            ctx->pc = 0x15DF6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15df6c;
        }
    }
    ctx->pc = 0x15DFB0u;
}
