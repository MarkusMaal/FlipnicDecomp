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

// Function: entry_00163594
// Address: 0x163594 - 0x1635c8
void entry_00163594_0x163594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163594_0x163594");
#endif

    ctx->pc = 0x163594u;

    // 0x163594: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x163594u;
    {
        const bool branch_taken_0x163594 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x163598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163594u;
        // 0x163598: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163594) {
            ctx->pc = 0x1635CCu;
            return;
        }
    }
    ctx->pc = 0x16359Cu;
    // 0x16359c: 0x8623021a  lh          $v1, 0x21A($s1)
    ctx->pc = 0x16359cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x1635a0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1635a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1635a4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1635A4u;
    {
        const bool branch_taken_0x1635a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1635a4) {
            ctx->pc = 0x1635C8u;
            return;
        }
    }
    ctx->pc = 0x1635ACu;
    // 0x1635ac: 0xc60002a0  lwc1        $f0, 0x2A0($s0)
    ctx->pc = 0x1635acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1635b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1635b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1635b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1635b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1635b8: 0x0  nop
    ctx->pc = 0x1635b8u;
    // NOP
    // 0x1635bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1635bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1635c0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1635C0u;
    {
        const bool branch_taken_0x1635c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1635C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635C0u;
        // 0x1635c4: 0xe60002a0  swc1        $f0, 0x2A0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635c0) {
            ctx->pc = 0x1636ACu;
            return;
        }
    }
    ctx->pc = 0x1635C8u;
}
