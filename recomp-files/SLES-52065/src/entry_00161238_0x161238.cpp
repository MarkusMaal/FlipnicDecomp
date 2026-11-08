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

// Function: entry_00161238
// Address: 0x161238 - 0x161280
void entry_00161238_0x161238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161238_0x161238");
#endif

    ctx->pc = 0x161238u;

    // 0x161238: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x161238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16123c: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x16123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161240: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x161240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161244: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x161244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x161248: 0x0  nop
    ctx->pc = 0x161248u;
    // NOP
    // 0x16124c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16124cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x161250: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x161250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x161254: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161258: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x161258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x16125c: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x16125cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x161260: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x161260u;
    {
        const bool branch_taken_0x161260 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x161260) {
            ctx->pc = 0x1612E0u;
            return;
        }
    }
    ctx->pc = 0x161268u;
    // 0x161268: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x161268u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x16126c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16126Cu;
    {
        const bool branch_taken_0x16126c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x161270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16126Cu;
        // 0x161270: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16126c) {
            ctx->pc = 0x161280u;
            return;
        }
    }
    ctx->pc = 0x161274u;
    // 0x161274: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x161274u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161278u;
    {
        const bool branch_taken_0x161278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161278u;
        // 0x16127c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161278) {
            ctx->pc = 0x161298u;
            return;
        }
    }
    ctx->pc = 0x161280u;
}
