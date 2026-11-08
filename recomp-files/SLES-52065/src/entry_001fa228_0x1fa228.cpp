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

// Function: entry_001fa228
// Address: 0x1fa228 - 0x1fa2e0
void entry_001fa228_0x1fa228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa228_0x1fa228");
#endif

    ctx->pc = 0x1fa228u;

    // 0x1fa228: 0x1025c3  sra         $a0, $s0, 23
    ctx->pc = 0x1fa228u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 23));
    // 0x1fa22c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fa22cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fa230: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fa230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fa234: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x1fa234u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x1fa238: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fa238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa23c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1fa23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fa240: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x1fa240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1fa244: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FA244u;
    {
        const bool branch_taken_0x1fa244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa244) {
            ctx->pc = 0x1FA248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA244u;
            // 0x1fa248: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA2E4u;
            return;
        }
    }
    ctx->pc = 0x1FA24Cu;
    // 0x1fa24c: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1fa24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1fa250: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x1fa250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x1fa254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa258: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x1fa258u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x1fa25c: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1fa25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x1fa260: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x1fa260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x1fa264: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa268: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x1fa268u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa26c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1fa26cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1fa270: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1fa270u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1fa274: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1fa274u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1fa278: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1fa278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1fa27c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1fa27cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fa280: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x1fa280u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1fa284: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1fa284u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fa288: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fa288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fa28c: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x1fa28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x1fa290: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fa290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa294: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1fa294u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fa298: 0x2862001a  slti        $v0, $v1, 0x1A
    ctx->pc = 0x1fa298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1fa29c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA29Cu;
    {
        const bool branch_taken_0x1fa29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa29c) {
            ctx->pc = 0x1FA2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA29Cu;
            // 0x1fa2a0: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA2E4u;
            return;
        }
    }
    ctx->pc = 0x1FA2A4u;
    // 0x1fa2a4: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1fa2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x1fa2a8: 0x3421a300  ori         $at, $at, 0xA300
    ctx->pc = 0x1fa2a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41728);
    // 0x1fa2ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa2b0: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x1fa2b0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x1fa2b4: 0x3c01248d  lui         $at, 0x248D
    ctx->pc = 0x1fa2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9357 << 16));
    // 0x1fa2b8: 0x34213132  ori         $at, $at, 0x3132
    ctx->pc = 0x1fa2b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12594);
    // 0x1fa2bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa2c0: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x1fa2c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa2c4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1fa2c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x1fa2c8: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1fa2c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1fa2cc: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1fa2ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1fa2d0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1fa2d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1fa2d4: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x1fa2d4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1fa2d8: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x1fa2d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1fa2dc: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa2dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x1fa2e0u;
}
