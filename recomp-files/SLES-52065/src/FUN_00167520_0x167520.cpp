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

// Function: FUN_00167520
// Address: 0x167520 - 0x167578
void FUN_00167520_0x167520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167520_0x167520");
#endif

    switch (ctx->pc) {
        case 0x167560u: goto label_167560;
        default: break;
    }

    ctx->pc = 0x167520u;

    // 0x167520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16752c: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x16752cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x167530: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x167530u;
    {
        const bool branch_taken_0x167530 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x167534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167530u;
        // 0x167534: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167530) {
            ctx->pc = 0x167568u;
            goto label_167568;
        }
    }
    ctx->pc = 0x167538u;
    // 0x167538: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x167538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16753c: 0xa6030220  sh          $v1, 0x220($s0)
    ctx->pc = 0x16753cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x167540: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x167540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x167544: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x167544u;
    {
        const bool branch_taken_0x167544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x167544) {
            ctx->pc = 0x167568u;
            goto label_167568;
        }
    }
    ctx->pc = 0x16754Cu;
    // 0x16754c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167550: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x167550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x167554: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167558: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167558u;
    SET_GPR_U32(ctx, 31, 0x167560u);
    ctx->pc = 0x16755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167558u;
    // 0x16755c: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167558u, 0x167560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167560u;
label_167560:
    // 0x167560: 0x86030224  lh          $v1, 0x224($s0)
    ctx->pc = 0x167560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x167564: 0xa6030226  sh          $v1, 0x226($s0)
    ctx->pc = 0x167564u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 3));
label_167568:
    // 0x167568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16756c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16756cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167570: 0x3e00008  jr          $ra
    ctx->pc = 0x167570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167570u;
        // 0x167574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167578u;
}
