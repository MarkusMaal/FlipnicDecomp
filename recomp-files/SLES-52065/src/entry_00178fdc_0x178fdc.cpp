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

// Function: entry_00178fdc
// Address: 0x178fdc - 0x17901c
void entry_00178fdc_0x178fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178fdc_0x178fdc");
#endif

    ctx->pc = 0x178fdcu;

    // 0x178fdc: 0x0  nop
    ctx->pc = 0x178fdcu;
    // NOP
    // 0x178fe0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178fe4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x178fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x178fe8: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x178FE8u;
    {
        const bool branch_taken_0x178fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FE8u;
        // 0x178fec: 0x41140  sll         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fe8) {
            ctx->pc = 0x178F84u;
            return;
        }
    }
    ctx->pc = 0x178FF0u;
    // 0x178ff0: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x178ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x178ff4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x178ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x178ff8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x178ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x178ffc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x178ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x179000: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x179000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x179004: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179008: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x179008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17900c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x179010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179014: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x179014u;
    {
        const bool branch_taken_0x179014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179014u;
        // 0x179018: 0x4614a542  mul.s       $f21, $f20, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179014) {
            ctx->pc = 0x17911Cu;
            return;
        }
    }
    ctx->pc = 0x17901Cu;
}
