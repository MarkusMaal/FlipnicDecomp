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

// Function: entry_001fb970
// Address: 0x1fb970 - 0x1fb9b8
void entry_001fb970_0x1fb970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb970_0x1fb970");
#endif

    ctx->pc = 0x1fb970u;

    // 0x1fb970: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x1fb970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x1fb974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb978: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1fb978u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb97c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fb97cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fb980: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1fb980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1fb984: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1fb984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb988: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x1fb988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x1fb98c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fb990: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x1fb990u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x1fb994: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x1fb994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x1fb998: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1fb998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fb99c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB99Cu;
    {
        const bool branch_taken_0x1fb99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB99Cu;
        // 0x1fb9a0: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb99c) {
            ctx->pc = 0x1FB9B8u;
            return;
        }
    }
    ctx->pc = 0x1FB9A4u;
    // 0x1fb9a4: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x1fb9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x1fb9a8: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x1fb9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x1fb9ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb9b0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1FB9B0u;
    {
        const bool branch_taken_0x1fb9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9B0u;
        // 0x1fb9b4: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9b0) {
            ctx->pc = 0x1FBA78u;
            return;
        }
    }
    ctx->pc = 0x1FB9B8u;
}
