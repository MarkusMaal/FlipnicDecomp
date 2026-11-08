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

// Function: FUN_0015bad0
// Address: 0x15bad0 - 0x15bb28
void FUN_0015bad0_0x15bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bad0_0x15bad0");
#endif

    switch (ctx->pc) {
        case 0x15bb10u: goto label_15bb10;
        default: break;
    }

    ctx->pc = 0x15bad0u;

    // 0x15bad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15bad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15bad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15badc: 0x84830210  lh          $v1, 0x210($a0)
    ctx->pc = 0x15badcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x15bae0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15BAE0u;
    {
        const bool branch_taken_0x15bae0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x15BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAE0u;
        // 0x15bae4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bae0) {
            ctx->pc = 0x15BB18u;
            goto label_15bb18;
        }
    }
    ctx->pc = 0x15BAE8u;
    // 0x15bae8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15baec: 0xa6030210  sh          $v1, 0x210($s0)
    ctx->pc = 0x15baecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 528), (uint16_t)GPR_U32(ctx, 3));
    // 0x15baf0: 0x86030210  lh          $v1, 0x210($s0)
    ctx->pc = 0x15baf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x15baf4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BAF4u;
    {
        const bool branch_taken_0x15baf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15baf4) {
            ctx->pc = 0x15BB18u;
            goto label_15bb18;
        }
    }
    ctx->pc = 0x15BAFCu;
    // 0x15bafc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15bb00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15bb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15bb04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15bb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15bb08: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15BB08u;
    SET_GPR_U32(ctx, 31, 0x15BB10u);
    ctx->pc = 0x15BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BB08u;
    // 0x15bb0c: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15BB08u, 0x15BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BB10u;
label_15bb10:
    // 0x15bb10: 0x86030214  lh          $v1, 0x214($s0)
    ctx->pc = 0x15bb10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x15bb14: 0xa6030216  sh          $v1, 0x216($s0)
    ctx->pc = 0x15bb14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 534), (uint16_t)GPR_U32(ctx, 3));
label_15bb18:
    // 0x15bb18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15bb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bb1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bb20: 0x3e00008  jr          $ra
    ctx->pc = 0x15BB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB20u;
        // 0x15bb24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BB28u;
}
