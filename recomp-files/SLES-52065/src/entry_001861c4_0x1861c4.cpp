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

// Function: entry_001861c4
// Address: 0x1861c4 - 0x18624c
void entry_001861c4_0x1861c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001861c4_0x1861c4");
#endif

    ctx->pc = 0x1861c4u;

    // 0x1861c4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1861c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1861c8: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x1861c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x1861cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1861ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1861d0: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x1861d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1861d4: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
    ctx->pc = 0x1861D4u;
    {
        const bool branch_taken_0x1861d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861d4) {
            ctx->pc = 0x186360u;
            return;
        }
    }
    ctx->pc = 0x1861DCu;
    // 0x1861dc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1861dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1861e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1861e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1861e4: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x1861e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1861e8: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x1861E8u;
    {
        const bool branch_taken_0x1861e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861e8) {
            ctx->pc = 0x186338u;
            return;
        }
    }
    ctx->pc = 0x1861F0u;
    // 0x1861f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1861f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1861f4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1861f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1861f8: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1861f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1861fc: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1861FCu;
    {
        const bool branch_taken_0x1861fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861fc) {
            ctx->pc = 0x186268u;
            return;
        }
    }
    ctx->pc = 0x186204u;
    // 0x186204: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x186204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x186208: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x186208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x18620c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x186210: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x186210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186214: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x186214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186218: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x186218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18621c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18621Cu;
    {
        const bool branch_taken_0x18621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18621c) {
            ctx->pc = 0x18624Cu;
            return;
        }
    }
    ctx->pc = 0x186224u;
    // 0x186224: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x186224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18622c: 0x0  nop
    ctx->pc = 0x18622cu;
    // NOP
    // 0x186230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x186230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x186234: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x186234u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x186238: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x186238u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18623c: 0x0  nop
    ctx->pc = 0x18623cu;
    // NOP
    // 0x186240: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x186240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x186244: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186244u;
    {
        const bool branch_taken_0x186244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186244u;
        // 0x186248: 0xe4600010  swc1        $f0, 0x10($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186244) {
            ctx->pc = 0x186260u;
            return;
        }
    }
    ctx->pc = 0x18624Cu;
}
