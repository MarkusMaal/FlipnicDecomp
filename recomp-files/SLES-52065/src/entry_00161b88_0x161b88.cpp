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

// Function: entry_00161b88
// Address: 0x161b88 - 0x161bdc
void entry_00161b88_0x161b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b88_0x161b88");
#endif

    switch (ctx->pc) {
        case 0x161bd4u: goto label_161bd4;
        default: break;
    }

    ctx->pc = 0x161b88u;

    // 0x161b88: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x161B88u;
    {
        const bool branch_taken_0x161b88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B88u;
        // 0x161b8c: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b88) {
            ctx->pc = 0x161BE0u;
            return;
        }
    }
    ctx->pc = 0x161B90u;
    // 0x161b90: 0x8204021c  lb          $a0, 0x21C($s0)
    ctx->pc = 0x161b90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x161b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161b98: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x161B98u;
    {
        const bool branch_taken_0x161b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x161b98) {
            ctx->pc = 0x161BDCu;
            return;
        }
    }
    ctx->pc = 0x161BA0u;
    // 0x161ba0: 0xc6010218  lwc1        $f1, 0x218($s0)
    ctx->pc = 0x161ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161ba4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x161ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x161ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161bac: 0x0  nop
    ctx->pc = 0x161bacu;
    // NOP
    // 0x161bb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161bb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161bb4: 0x0  nop
    ctx->pc = 0x161bb4u;
    // NOP
    // 0x161bb8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x161BB8u;
    {
        const bool branch_taken_0x161bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161bb8) {
            ctx->pc = 0x161BDCu;
            return;
        }
    }
    ctx->pc = 0x161BC0u;
    // 0x161bc0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x161bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x161bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bc8: 0xa202021c  sb          $v0, 0x21C($s0)
    ctx->pc = 0x161bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 2));
    // 0x161bcc: 0xc042118  jal         func_108460
    ctx->pc = 0x161BCCu;
    SET_GPR_U32(ctx, 31, 0x161BD4u);
    ctx->pc = 0x161BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161BCCu;
    // 0x161bd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x161BCCu, 0x161BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161BD4u;
label_161bd4:
    // 0x161bd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x161BD4u;
    {
        const bool branch_taken_0x161bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BD4u;
        // 0x161bd8: 0xa6000220  sh          $zero, 0x220($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bd4) {
            ctx->pc = 0x161C04u;
            return;
        }
    }
    ctx->pc = 0x161BDCu;
}
