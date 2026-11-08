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

// Function: FUN_00201720
// Address: 0x201720 - 0x201790
void FUN_00201720_0x201720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201720_0x201720");
#endif

    switch (ctx->pc) {
        case 0x20177cu: goto label_20177c;
        default: break;
    }

    ctx->pc = 0x201720u;

    // 0x201720: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x201720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x201724: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x201724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x201728: 0x8c4dd9ac  lw          $t5, -0x2654($v0)
    ctx->pc = 0x201728u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x20172c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x20172cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x201730: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x201730u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201734: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x201734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x201738: 0xffa600b0  sd          $a2, 0xB0($sp)
    ctx->pc = 0x201738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 6));
    // 0x20173c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x20173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x201740: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x201740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x201744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201748: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x201748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x20174c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x20174cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x201750: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x201750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x201754: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x201754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x201758: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x201758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x20175c: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x20175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x201760: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x201760u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x201764: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x201764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x201768: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x201768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x20176c: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x20176cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x201770: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x201770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x201774: 0xc080e8c  jal         func_203A30
    ctx->pc = 0x201774u;
    SET_GPR_U32(ctx, 31, 0x20177Cu);
    ctx->pc = 0x201778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201774u;
    // 0x201778: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A30u, 0x201774u, 0x20177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20177Cu;
label_20177c:
    // 0x20177c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201780: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x201780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201784: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x201784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x201788: 0x3e00008  jr          $ra
    ctx->pc = 0x201788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201788u;
        // 0x20178c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201790u;
}
