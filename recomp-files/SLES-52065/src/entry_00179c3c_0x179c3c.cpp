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

// Function: entry_00179c3c
// Address: 0x179c3c - 0x179c78
void entry_00179c3c_0x179c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179c3c_0x179c3c");
#endif

    ctx->pc = 0x179c3cu;

    // 0x179c3c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x179c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x179c40: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x179c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179c44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x179c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x179c48: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x179c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x179c4c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x179c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x179c50: 0xf8e00000  sqc2        $vf0, 0x0($a3)
    ctx->pc = 0x179c50u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179c54: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x179c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x179c58: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x179c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x179c5c: 0xf9000000  sqc2        $vf0, 0x0($t0)
    ctx->pc = 0x179c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c68: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x179c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x179c6c: 0xc6405ff4  lwc1        $f0, 0x5FF4($s2)
    ctx->pc = 0x179c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179c70: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x179C70u;
    {
        const bool branch_taken_0x179c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C70u;
        // 0x179c74: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c70) {
            ctx->pc = 0x179D6Cu;
            return;
        }
    }
    ctx->pc = 0x179C78u;
}
