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

// Function: entry_0013800c
// Address: 0x13800c - 0x1380d8
void entry_0013800c_0x13800c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013800c_0x13800c");
#endif

    ctx->pc = 0x13800cu;

    // 0x13800c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x138010: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x138010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x138014: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x138014u;
    {
        const bool branch_taken_0x138014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138014) {
            ctx->pc = 0x13820Cu;
            return;
        }
    }
    ctx->pc = 0x13801Cu;
    // 0x13801c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x13801cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x138020: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x138020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x138024: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x138024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x138028: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x138028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13802c: 0x8c840088  lw          $a0, 0x88($a0)
    ctx->pc = 0x13802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x138030: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x138030u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138034: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x138034u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x138038: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x138038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x13803c: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x13803cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x138040: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x138040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x138044: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x138044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x138048: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x138048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13804c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13804cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x138050: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x138050u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x138054: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x138054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x138058: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x138058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x13805c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x13805Cu;
    {
        const bool branch_taken_0x13805c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13805c) {
            ctx->pc = 0x1380D8u;
            return;
        }
    }
    ctx->pc = 0x138064u;
    // 0x138064: 0x8c860068  lw          $a2, 0x68($a0)
    ctx->pc = 0x138064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x138068: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13806c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13806cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138070: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x138070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138074: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x138074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x138078: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x138078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x13807c: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x13807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x138080: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x138080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x138084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138088: 0x3442801e  ori         $v0, $v0, 0x801E
    ctx->pc = 0x138088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32798);
    // 0x13808c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13808cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x138090: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x138090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x138094: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x138094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x138098: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x138098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13809c: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x13809cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1380a0: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1380a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1380a4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1380a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1380a8: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x1380a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1380ac: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1380acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1380b0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1380b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x1380b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1380b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1380b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1380b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1380bc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1380bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1380c0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1380c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1380c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1380c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1380c8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1380c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1380cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1380ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1380d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1380d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1380d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1380d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1380d8u;
}
