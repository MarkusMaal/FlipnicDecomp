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

// Function: FUN_001678c0
// Address: 0x1678c0 - 0x167918
void FUN_001678c0_0x1678c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001678c0_0x1678c0");
#endif

    switch (ctx->pc) {
        case 0x167900u: goto label_167900;
        default: break;
    }

    ctx->pc = 0x1678c0u;

    // 0x1678c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1678c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1678c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1678c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1678c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1678c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1678cc: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x1678ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x1678d0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1678D0u;
    {
        const bool branch_taken_0x1678d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1678D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678D0u;
        // 0x1678d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678d0) {
            ctx->pc = 0x167908u;
            goto label_167908;
        }
    }
    ctx->pc = 0x1678D8u;
    // 0x1678d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1678d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1678dc: 0xa6030220  sh          $v1, 0x220($s0)
    ctx->pc = 0x1678dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x1678e0: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x1678e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1678e4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1678E4u;
    {
        const bool branch_taken_0x1678e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1678e4) {
            ctx->pc = 0x167908u;
            goto label_167908;
        }
    }
    ctx->pc = 0x1678ECu;
    // 0x1678ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1678ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1678f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1678f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1678f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1678f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1678f8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1678F8u;
    SET_GPR_U32(ctx, 31, 0x167900u);
    ctx->pc = 0x1678FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678F8u;
    // 0x1678fc: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1678F8u, 0x167900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167900u;
label_167900:
    // 0x167900: 0x86030224  lh          $v1, 0x224($s0)
    ctx->pc = 0x167900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x167904: 0xa6030226  sh          $v1, 0x226($s0)
    ctx->pc = 0x167904u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 3));
label_167908:
    // 0x167908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16790c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16790cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167910: 0x3e00008  jr          $ra
    ctx->pc = 0x167910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167910u;
        // 0x167914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167918u;
}
