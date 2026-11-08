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

// Function: entry_001faf00
// Address: 0x1faf00 - 0x1faf40
void entry_001faf00_0x1faf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faf00_0x1faf00");
#endif

    ctx->pc = 0x1faf00u;

label_1faf00:
    // 0x1faf00: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x1faf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1faf04: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1faf04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1faf08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1faf08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1faf0c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1faf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1faf10: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1faf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1faf14: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1faf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faf18: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1faf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faf1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1faf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf20: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x1faf20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1faf24: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1faf24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1faf28: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1faf28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1faf2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1faf2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1faf30: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1faf30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1faf34: 0x10a0fff2  beqz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FAF34u;
    {
        const bool branch_taken_0x1faf34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF34u;
        // 0x1faf38: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf34) {
            ctx->pc = 0x1FAF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faf00;
        }
    }
    ctx->pc = 0x1FAF3Cu;
    // 0x1faf3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1faf3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1faf40u;
}
