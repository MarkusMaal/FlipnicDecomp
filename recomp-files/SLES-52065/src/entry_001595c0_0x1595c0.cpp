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

// Function: entry_001595c0
// Address: 0x1595c0 - 0x159614
void entry_001595c0_0x1595c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001595c0_0x1595c0");
#endif

    ctx->pc = 0x1595c0u;

    // 0x1595c0: 0xc60102f0  lwc1        $f1, 0x2F0($s0)
    ctx->pc = 0x1595c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1595c4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1595c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1595c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1595c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1595cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1595ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1595d0: 0x0  nop
    ctx->pc = 0x1595d0u;
    // NOP
    // 0x1595d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1595d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1595d8: 0x0  nop
    ctx->pc = 0x1595d8u;
    // NOP
    // 0x1595dc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1595DCu;
    {
        const bool branch_taken_0x1595dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1595dc) {
            ctx->pc = 0x159614u;
            return;
        }
    }
    ctx->pc = 0x1595E4u;
    // 0x1595e4: 0x8e03033c  lw          $v1, 0x33C($s0)
    ctx->pc = 0x1595e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x1595e8: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x1595e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1595ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1595ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1595f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1595f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595f4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1595f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1595f8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1595f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1595fc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1595fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159600: 0x9068000e  lbu         $t0, 0xE($v1)
    ctx->pc = 0x159600u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x159604: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x159604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x159608: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x159608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15960c: 0xc0425d4  jal         func_109750
    ctx->pc = 0x15960Cu;
    SET_GPR_U32(ctx, 31, 0x159614u);
    ctx->pc = 0x159610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15960Cu;
    // 0x159610: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x15960Cu, 0x159614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159614u;
}
