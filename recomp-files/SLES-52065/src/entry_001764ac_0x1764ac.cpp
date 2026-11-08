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

// Function: entry_001764ac
// Address: 0x1764ac - 0x1764f4
void entry_001764ac_0x1764ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001764ac_0x1764ac");
#endif

    ctx->pc = 0x1764acu;

    // 0x1764ac: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1764acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1764b0: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x1764b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1764b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1764b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1764b8: 0xc420f5c8  lwc1        $f0, -0xA38($at)
    ctx->pc = 0x1764b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1764bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1764bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1764c0: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1764c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1764c4: 0x9062004c  lbu         $v0, 0x4C($v1)
    ctx->pc = 0x1764c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1764c8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1764C8u;
    {
        const bool branch_taken_0x1764c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1764CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764C8u;
        // 0x1764cc: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764c8) {
            ctx->pc = 0x176590u;
            return;
        }
    }
    ctx->pc = 0x1764D0u;
    // 0x1764d0: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1764d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1764d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1764d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1764d8: 0x0  nop
    ctx->pc = 0x1764d8u;
    // NOP
    // 0x1764dc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1764dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1764e0: 0x0  nop
    ctx->pc = 0x1764e0u;
    // NOP
    // 0x1764e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1764E4u;
    {
        const bool branch_taken_0x1764e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1764E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764E4u;
        // 0x1764e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764e4) {
            ctx->pc = 0x1764F4u;
            return;
        }
    }
    ctx->pc = 0x1764ECu;
    // 0x1764ec: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1764ECu;
    {
        const bool branch_taken_0x1764ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1764ec) {
            ctx->pc = 0x176618u;
            return;
        }
    }
    ctx->pc = 0x1764F4u;
}
