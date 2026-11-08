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

// Function: entry_00141118
// Address: 0x141118 - 0x14113c
void entry_00141118_0x141118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141118_0x141118");
#endif

    ctx->pc = 0x141118u;

    // 0x141118: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x141118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14111c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x14111cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x141120: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x141120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141124: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x141124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141128: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x141128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14112c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x14112cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x141130: 0x122000ac  beqz        $s1, . + 4 + (0xAC << 2)
    ctx->pc = 0x141130u;
    {
        const bool branch_taken_0x141130 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x141134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141130u;
        // 0x141134: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141130) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x141138u;
    // 0x141138: 0x27a701a8  addiu       $a3, $sp, 0x1A8
    ctx->pc = 0x141138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    ctx->pc = 0x14113cu;
}
