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

// Function: entry_001fb300
// Address: 0x1fb300 - 0x1fb380
void entry_001fb300_0x1fb300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb300_0x1fb300");
#endif

    ctx->pc = 0x1fb300u;

    // 0x1fb300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb304: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FB304u;
    {
        const bool branch_taken_0x1fb304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB304u;
        // 0x1fb308: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb304) {
            ctx->pc = 0x1FB380u;
            return;
        }
    }
    ctx->pc = 0x1FB30Cu;
    // 0x1fb30c: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x1fb30cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb310: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fb310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb314: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fb314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fb318: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x1fb318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x1fb31c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fb31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fb320: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1fb320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1fb324: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x1fb324u;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x1fb328: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1fb328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1fb32c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb32cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb330: 0x0  nop
    ctx->pc = 0x1fb330u;
    // NOP
    // 0x1fb334: 0x0  nop
    ctx->pc = 0x1fb334u;
    // NOP
    // 0x1fb338: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x1fb338u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x1fb33c: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x1fb33cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1fb340: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1fb340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1fb344: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fb344u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb348: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fb348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fb34c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb34cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb350: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x1fb350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x1fb354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb35c: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x1fb35cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fb360: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fb360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb364: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x1fb364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1fb368: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1fb368u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb36c: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x1fb36cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x1fb370: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fb370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fb374: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fb374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb378: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fb378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fb37c: 0x0  nop
    ctx->pc = 0x1fb37cu;
    // NOP
    ctx->pc = 0x1fb380u;
}
