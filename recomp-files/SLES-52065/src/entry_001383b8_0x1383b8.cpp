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

// Function: entry_001383b8
// Address: 0x1383b8 - 0x13843c
void entry_001383b8_0x1383b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001383b8_0x1383b8");
#endif

    switch (ctx->pc) {
        case 0x13841cu: goto label_13841c;
        default: break;
    }

    ctx->pc = 0x1383b8u;

label_1383b8:
    // 0x1383b8: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x1383b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1383bc:
    // 0x1383bc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1383bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1383c0:
    // 0x1383c0: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1383c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1383c4:
    // 0x1383c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1383c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1383c8:
    // 0x1383c8: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x1383c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
label_1383cc:
    // 0x1383cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1383ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1383d0:
    // 0x1383d0: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x1383d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_1383d4:
    // 0x1383d4: 0x34638019  ori         $v1, $v1, 0x8019
    ctx->pc = 0x1383d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32793);
label_1383d8:
    // 0x1383d8: 0xf43821  addu        $a3, $a3, $s4
    ctx->pc = 0x1383d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_1383dc:
    // 0x1383dc: 0xa1060003  sb          $a2, 0x3($t0)
    ctx->pc = 0x1383dcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 6));
label_1383e0:
    // 0x1383e0: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x1383e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_1383e4:
    // 0x1383e4: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x1383e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
label_1383e8:
    // 0x1383e8: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x1383e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
label_1383ec:
    // 0x1383ec: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x1383ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
label_1383f0:
    // 0x1383f0: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x1383f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
label_1383f4:
    // 0x1383f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1383f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1383f8:
    // 0x1383f8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1383f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1383fc:
    // 0x1383fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1383fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_138400:
    // 0x138400: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x138400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_138404:
    // 0x138404: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x138404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_138408:
    // 0x138408: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x138408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_13840c:
    // 0x13840c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_138410:
    if (ctx->pc == 0x138410u) {
        ctx->pc = 0x138410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13840Cu;
        // 0x138410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138414u;
        goto label_138414;
    }
    ctx->pc = 0x13840Cu;
    {
        const bool branch_taken_0x13840c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x138410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13840Cu;
        // 0x138410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13840c) {
            ctx->pc = 0x13843Cu;
            return;
        }
    }
    ctx->pc = 0x138414u;
label_138414:
    // 0x138414: 0xc0485c0  jal         func_121700
label_138418:
    if (ctx->pc == 0x138418u) {
        ctx->pc = 0x13841Cu;
        goto label_13841c;
    }
    ctx->pc = 0x138414u;
    SET_GPR_U32(ctx, 31, 0x13841Cu);
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x138414u, 0x13841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13841Cu;
label_13841c:
    // 0x13841c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x13841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_138420:
    // 0x138420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138424:
    // 0x138424: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_138428:
    // 0x138428: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x138428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13842c:
    // 0x13842c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13842cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_138430:
    // 0x138430: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x138430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_138434:
    // 0x138434: 0x320f809  jalr        $t9
label_138438:
    if (ctx->pc == 0x138438u) {
        ctx->pc = 0x138438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138434u;
        // 0x138438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13843Cu;
        goto label_fallthrough_0x138434;
    }
    ctx->pc = 0x138434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13843Cu);
        ctx->pc = 0x138438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138434u;
        // 0x138438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138434u, 0x13843Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x138434:
    ctx->pc = 0x13843Cu;
}
