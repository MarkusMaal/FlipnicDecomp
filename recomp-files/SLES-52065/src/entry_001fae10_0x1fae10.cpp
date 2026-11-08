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

// Function: entry_001fae10
// Address: 0x1fae10 - 0x1fae34
void entry_001fae10_0x1fae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fae10_0x1fae10");
#endif

    ctx->pc = 0x1fae10u;

label_1fae10:
    // 0x1fae10: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fae10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fae14: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1fae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1fae18: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fae18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fae1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fae20: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fae20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fae24: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FAE24u;
    {
        const bool branch_taken_0x1fae24 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1fae24) {
            ctx->pc = 0x1FAE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fae10;
        }
    }
    ctx->pc = 0x1FAE2Cu;
    // 0x1fae2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAE2Cu;
    {
        const bool branch_taken_0x1fae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE2Cu;
        // 0x1fae30: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae2c) {
            ctx->pc = 0x1FAE3Cu;
            return;
        }
    }
    ctx->pc = 0x1FAE34u;
}
