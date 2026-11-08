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

// Function: entry_001faeb0
// Address: 0x1faeb0 - 0x1faef0
void entry_001faeb0_0x1faeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faeb0_0x1faeb0");
#endif

    ctx->pc = 0x1faeb0u;

label_1faeb0:
    // 0x1faeb0: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x1faeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1faeb4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1faeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1faeb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1faeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1faebc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1faebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1faec0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1faec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1faec4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1faec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faec8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1faec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faecc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1faeccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faed0: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1faed0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1faed4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1faed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1faed8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1faed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1faedc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1faedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1faee0: 0x1cc0fff3  bgtz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FAEE0u;
    {
        const bool branch_taken_0x1faee0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1FAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEE0u;
        // 0x1faee4: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faee0) {
            ctx->pc = 0x1FAEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faeb0;
        }
    }
    ctx->pc = 0x1FAEE8u;
    // 0x1faee8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1faee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faeec: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1faeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x1faef0u;
}
