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

// Function: entry_0010c768
// Address: 0x10c768 - 0x10c7a0
void entry_0010c768_0x10c768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c768_0x10c768");
#endif

    ctx->pc = 0x10c768u;

    // 0x10c768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10c768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c76c: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x10C76Cu;
    {
        const bool branch_taken_0x10c76c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C76Cu;
        // 0x10c770: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c76c) {
            ctx->pc = 0x10C820u;
            return;
        }
    }
    ctx->pc = 0x10C774u;
    // 0x10c774: 0xc6220248  lwc1        $f2, 0x248($s1)
    ctx->pc = 0x10c774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10c778: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10c778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x10c77c: 0xc6210244  lwc1        $f1, 0x244($s1)
    ctx->pc = 0x10c77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10c780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c784: 0x0  nop
    ctx->pc = 0x10c784u;
    // NOP
    // 0x10c788: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x10c788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x10c78c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10c78cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c790: 0x0  nop
    ctx->pc = 0x10c790u;
    // NOP
    // 0x10c794: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x10C794u;
    {
        const bool branch_taken_0x10c794 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C794u;
        // 0x10c798: 0xe6210244  swc1        $f1, 0x244($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c794) {
            ctx->pc = 0x10C7A0u;
            return;
        }
    }
    ctx->pc = 0x10C79Cu;
    // 0x10c79c: 0xe6200244  swc1        $f0, 0x244($s1)
    ctx->pc = 0x10c79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    ctx->pc = 0x10c7a0u;
}
