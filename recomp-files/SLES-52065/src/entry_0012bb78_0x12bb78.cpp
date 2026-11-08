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

// Function: entry_0012bb78
// Address: 0x12bb78 - 0x12bbcc
void entry_0012bb78_0x12bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bb78_0x12bb78");
#endif

    ctx->pc = 0x12bb78u;

label_12bb78:
    // 0x12bb78: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x12bb78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x12bb7c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x12bb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x12bb80: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x12bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12bb84: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x12bb84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12bb88: 0xc5260004  lwc1        $f6, 0x4($t1)
    ctx->pc = 0x12bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x12bb8c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x12bb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x12bb90: 0xc5250008  lwc1        $f5, 0x8($t1)
    ctx->pc = 0x12bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12bb94: 0xc524000c  lwc1        $f4, 0xC($t1)
    ctx->pc = 0x12bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12bb98: 0xc5230010  lwc1        $f3, 0x10($t1)
    ctx->pc = 0x12bb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12bb9c: 0xc5220014  lwc1        $f2, 0x14($t1)
    ctx->pc = 0x12bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12bba0: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x12bba0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x12bba4: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x12bba4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x12bba8: 0x460539c0  add.s       $f7, $f7, $f5
    ctx->pc = 0x12bba8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x12bbac: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x12bbacu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x12bbb0: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x12bbb0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x12bbb4: 0xc5210018  lwc1        $f1, 0x18($t1)
    ctx->pc = 0x12bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bbb8: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x12bbb8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x12bbbc: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x12bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12bbc0: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x12bbc0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x12bbc4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12BBC4u;
    {
        const bool branch_taken_0x12bbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBC4u;
        // 0x12bbc8: 0x460039c0  add.s       $f7, $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbc4) {
            ctx->pc = 0x12BB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bb78;
        }
    }
    ctx->pc = 0x12BBCCu;
}
