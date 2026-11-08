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

// Function: entry_001fb1ec
// Address: 0x1fb1ec - 0x1fb300
void entry_001fb1ec_0x1fb1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb1ec_0x1fb1ec");
#endif

    ctx->pc = 0x1fb1ecu;

    // 0x1fb1ec: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fb1f0: 0x24624d20  addiu       $v0, $v1, 0x4D20
    ctx->pc = 0x1fb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19744));
    // 0x1fb1f4: 0xc4694d20  lwc1        $f9, 0x4D20($v1)
    ctx->pc = 0x1fb1f4u;
    { uint32_t bits = FAST_READ32(0x224D20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1fb1f8: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x1fb1f8u;
    { uint32_t bits = FAST_READ32(0x224D50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fb1fc: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x1fb1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x1fb200: 0x460e72c2  mul.s       $f11, $f14, $f14
    ctx->pc = 0x1fb200u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x1fb204: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x1fb204u;
    { uint32_t bits = FAST_READ32(0x224D4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fb208: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1fb208u;
    { uint32_t bits = FAST_READ32(0x224D48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1fb20c: 0x460c73c2  mul.s       $f15, $f14, $f12
    ctx->pc = 0x1fb20cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x1fb210: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1fb210u;
    { uint32_t bits = FAST_READ32(0x224D44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fb214: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x1fb214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x1fb218: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x1fb218u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x1fb21c: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x1fb21cu;
    { uint32_t bits = FAST_READ32(0x224D40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fb220: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x1fb220u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x1fb224: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1fb224u;
    { uint32_t bits = FAST_READ32(0x224D3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb228: 0xc4470018  lwc1        $f7, 0x18($v0)
    ctx->pc = 0x1fb228u;
    { uint32_t bits = FAST_READ32(0x224D38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1fb22c: 0x460f4a42  mul.s       $f9, $f9, $f15
    ctx->pc = 0x1fb22cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x1fb230: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x1fb230u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x1fb234: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1fb234u;
    { uint32_t bits = FAST_READ32(0x224D34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb238: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1fb238u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1fb23c: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x1fb23cu;
    { uint32_t bits = FAST_READ32(0x224D30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fb240: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x1fb240u;
    { uint32_t bits = FAST_READ32(0x224D2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fb244: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1fb244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fb248: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x1fb248u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x1fb24c: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x1fb24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1fb250: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x1fb250u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x1fb254: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x1fb254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1fb258: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x1fb258u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x1fb25c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fb25cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fb260: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x1fb260u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x1fb264: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x1fb264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x1fb268: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x1fb268u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x1fb26c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1fb26cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fb270: 0x460759c2  mul.s       $f7, $f11, $f7
    ctx->pc = 0x1fb270u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x1fb274: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x1fb274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x1fb278: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x1fb278u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x1fb27c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1fb27cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1fb280: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x1fb280u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x1fb284: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x1fb284u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x1fb288: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x1fb288u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x1fb28c: 0x460550c0  add.s       $f3, $f10, $f5
    ctx->pc = 0x1fb28cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x1fb290: 0x46087102  mul.s       $f4, $f14, $f8
    ctx->pc = 0x1fb290u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x1fb294: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x1fb294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1fb298: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x1fb298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x1fb29c: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x1fb29cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x1fb2a0: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1fb2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1fb2a4: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x1fb2a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1fb2a8: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x1fb2a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x1fb2ac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FB2ACu;
    {
        const bool branch_taken_0x1fb2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2ACu;
        // 0x1fb2b0: 0x460362c0  add.s       $f11, $f12, $f3 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2ac) {
            ctx->pc = 0x1FB300u;
            return;
        }
    }
    ctx->pc = 0x1FB2B4u;
    // 0x1fb2b4: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1fb2b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fb2b8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1fb2b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1fb2bc: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x1fb2bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x1fb2c0: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x1fb2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x1fb2c4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fb2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fb2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb2cc: 0x46045840  add.s       $f1, $f11, $f4
    ctx->pc = 0x1fb2ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x1fb2d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fb2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb2d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fb2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb2d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1fb2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1fb2dc: 0x0  nop
    ctx->pc = 0x1fb2dcu;
    // NOP
    // 0x1fb2e0: 0x0  nop
    ctx->pc = 0x1fb2e0u;
    // NOP
    // 0x1fb2e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fb2e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fb2e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1fb2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1fb2ec: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1fb2ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1fb2f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fb2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1fb2f4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1fb2f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1fb2f8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1FB2F8u;
    {
        const bool branch_taken_0x1fb2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2F8u;
        // 0x1fb2fc: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2f8) {
            ctx->pc = 0x1FB380u;
            return;
        }
    }
    ctx->pc = 0x1FB300u;
}
