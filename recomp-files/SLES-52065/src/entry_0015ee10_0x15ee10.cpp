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

// Function: entry_0015ee10
// Address: 0x15ee10 - 0x15ee50
void entry_0015ee10_0x15ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ee10_0x15ee10");
#endif

    ctx->pc = 0x15ee10u;

    // 0x15ee10: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15ee14: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15ee18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ee1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15ee20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ee24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15ee28: 0xc44102a4  lwc1        $f1, 0x2A4($v0)
    ctx->pc = 0x15ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ee2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ee2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ee30: 0x0  nop
    ctx->pc = 0x15ee30u;
    // NOP
    // 0x15ee34: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x15ee34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ee38: 0x0  nop
    ctx->pc = 0x15ee38u;
    // NOP
    // 0x15ee3c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15EE3Cu;
    {
        const bool branch_taken_0x15ee3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE3Cu;
        // 0x15ee40: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee3c) {
            ctx->pc = 0x15EE50u;
            return;
        }
    }
    ctx->pc = 0x15EE44u;
    // 0x15ee44: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x15ee44u;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x15ee48: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x15EE48u;
    SET_GPR_U32(ctx, 31, 0x15EE50u);
    ctx->pc = 0x15EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE48u;
    // 0x15ee4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x15EE48u, 0x15EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE50u;
}
