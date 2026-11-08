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

// Function: entry_0015db34
// Address: 0x15db34 - 0x15db78
void entry_0015db34_0x15db34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015db34_0x15db34");
#endif

    ctx->pc = 0x15db34u;

label_15db34:
    // 0x15db34: 0x0  nop
    ctx->pc = 0x15db34u;
    // NOP
    // 0x15db38: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x15db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15db3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15db40: 0x2272021  addu        $a0, $s1, $a3
    ctx->pc = 0x15db40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x15db44: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x15db44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15db48: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x15db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x15db4c: 0x8cc52cd8  lw          $a1, 0x2CD8($a2)
    ctx->pc = 0x15db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x15db50: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x15db50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x15db54: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x15db54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x15db58: 0xc4a00200  lwc1        $f0, 0x200($a1)
    ctx->pc = 0x15db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15db5c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x15db5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15db60: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x15db60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x15db64: 0x8cc42cd8  lw          $a0, 0x2CD8($a2)
    ctx->pc = 0x15db64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x15db68: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x15db68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x15db6c: 0x1b0102a  slt         $v0, $t5, $s0
    ctx->pc = 0x15db6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15db70: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15DB70u;
    {
        const bool branch_taken_0x15db70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB70u;
        // 0x15db74: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db70) {
            ctx->pc = 0x15DB34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15db34;
        }
    }
    ctx->pc = 0x15DB78u;
}
