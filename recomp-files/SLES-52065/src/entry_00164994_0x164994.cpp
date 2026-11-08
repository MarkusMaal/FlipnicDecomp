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

// Function: entry_00164994
// Address: 0x164994 - 0x1649e0
void entry_00164994_0x164994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164994_0x164994");
#endif

    switch (ctx->pc) {
        case 0x1649a0u: goto label_1649a0;
        case 0x1649d8u: goto label_1649d8;
        default: break;
    }

    ctx->pc = 0x164994u;

    // 0x164994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164998: 0xc059320  jal         func_164C80
    ctx->pc = 0x164998u;
    SET_GPR_U32(ctx, 31, 0x1649A0u);
    ctx->pc = 0x16499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164998u;
    // 0x16499c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C80u, 0x164998u, 0x1649A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649A0u;
label_1649a0:
    // 0x1649a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1649a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649a4: 0x9242024e  lbu         $v0, 0x24E($s2)
    ctx->pc = 0x1649a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 590)));
    // 0x1649a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1649A8u;
    {
        const bool branch_taken_0x1649a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1649a8) {
            ctx->pc = 0x1649E0u;
            return;
        }
    }
    ctx->pc = 0x1649B0u;
    // 0x1649b0: 0xc62102ec  lwc1        $f1, 0x2EC($s1)
    ctx->pc = 0x1649b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1649b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1649b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1649b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1649b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1649bc: 0x0  nop
    ctx->pc = 0x1649bcu;
    // NOP
    // 0x1649c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1649c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1649c4: 0x0  nop
    ctx->pc = 0x1649c4u;
    // NOP
    // 0x1649c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1649C8u;
    {
        const bool branch_taken_0x1649c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1649CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649C8u;
        // 0x1649cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1649c8) {
            ctx->pc = 0x1649E0u;
            return;
        }
    }
    ctx->pc = 0x1649D0u;
    // 0x1649d0: 0xc042118  jal         func_108460
    ctx->pc = 0x1649D0u;
    SET_GPR_U32(ctx, 31, 0x1649D8u);
    ctx->pc = 0x1649D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649D0u;
    // 0x1649d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1649D0u, 0x1649D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649D8u;
label_1649d8:
    // 0x1649d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1649d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1649dc: 0xa242024e  sb          $v0, 0x24E($s2)
    ctx->pc = 0x1649dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 590), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1649e0u;
}
