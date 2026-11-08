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

// Function: entry_001688f8
// Address: 0x1688f8 - 0x168948
void entry_001688f8_0x1688f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001688f8_0x1688f8");
#endif

    switch (ctx->pc) {
        case 0x168944u: goto label_168944;
        default: break;
    }

    ctx->pc = 0x1688f8u;

    // 0x1688f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1688f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1688fc: 0xa2030079  sb          $v1, 0x79($s0)
    ctx->pc = 0x1688fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x168900: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x168900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x168904: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x168904u;
    {
        const bool branch_taken_0x168904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168904) {
            ctx->pc = 0x168948u;
            return;
        }
    }
    ctx->pc = 0x16890Cu;
    // 0x16890c: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x16890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168910: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x168914: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x168918: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x168918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16891c: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x16891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x168920: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x168920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x168924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168928: 0x0  nop
    ctx->pc = 0x168928u;
    // NOP
    // 0x16892c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16892cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x168930: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x168930u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x168934: 0x0  nop
    ctx->pc = 0x168934u;
    // NOP
    // 0x168938: 0x0  nop
    ctx->pc = 0x168938u;
    // NOP
    // 0x16893c: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x16893Cu;
    SET_GPR_U32(ctx, 31, 0x168944u);
    ctx->pc = 0x168940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16893Cu;
    // 0x168940: 0x46001b00  add.s       $f12, $f3, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16893Cu, 0x168944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168944u;
label_168944:
    // 0x168944: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x168944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->pc = 0x168948u;
}
