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

// Function: FUN_00160060
// Address: 0x160060 - 0x16011c
void FUN_00160060_0x160060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160060_0x160060");
#endif

    switch (ctx->pc) {
        case 0x16006cu: goto label_16006c;
        case 0x1600e0u: goto label_1600e0;
        default: break;
    }

    ctx->pc = 0x160060u;

    // 0x160060: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160064: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160068: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16006c:
    // 0x16006c: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x16006cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x160070: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x160070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x160074: 0xa5050228  sh          $a1, 0x228($t0)
    ctx->pc = 0x160074u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 552), (uint16_t)GPR_U32(ctx, 5));
    // 0x160078: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x160078u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16007c: 0xa505022a  sh          $a1, 0x22A($t0)
    ctx->pc = 0x16007cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 554), (uint16_t)GPR_U32(ctx, 5));
    // 0x160080: 0x24e71e80  addiu       $a3, $a3, 0x1E80
    ctx->pc = 0x160080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7808));
    // 0x160084: 0xa50505f8  sh          $a1, 0x5F8($t0)
    ctx->pc = 0x160084u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1528), (uint16_t)GPR_U32(ctx, 5));
    // 0x160088: 0xa50505fa  sh          $a1, 0x5FA($t0)
    ctx->pc = 0x160088u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1530), (uint16_t)GPR_U32(ctx, 5));
    // 0x16008c: 0xa50509c8  sh          $a1, 0x9C8($t0)
    ctx->pc = 0x16008cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2504), (uint16_t)GPR_U32(ctx, 5));
    // 0x160090: 0xa50509ca  sh          $a1, 0x9CA($t0)
    ctx->pc = 0x160090u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2506), (uint16_t)GPR_U32(ctx, 5));
    // 0x160094: 0xa5050d98  sh          $a1, 0xD98($t0)
    ctx->pc = 0x160094u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 3480), (uint16_t)GPR_U32(ctx, 5));
    // 0x160098: 0xa5050d9a  sh          $a1, 0xD9A($t0)
    ctx->pc = 0x160098u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 3482), (uint16_t)GPR_U32(ctx, 5));
    // 0x16009c: 0xa5051168  sh          $a1, 0x1168($t0)
    ctx->pc = 0x16009cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4456), (uint16_t)GPR_U32(ctx, 5));
    // 0x1600a0: 0xa505116a  sh          $a1, 0x116A($t0)
    ctx->pc = 0x1600a0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4458), (uint16_t)GPR_U32(ctx, 5));
    // 0x1600a4: 0xa5051538  sh          $a1, 0x1538($t0)
    ctx->pc = 0x1600a4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5432), (uint16_t)GPR_U32(ctx, 5));
    // 0x1600a8: 0xa505153a  sh          $a1, 0x153A($t0)
    ctx->pc = 0x1600a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5434), (uint16_t)GPR_U32(ctx, 5));
    // 0x1600ac: 0xa5051908  sh          $a1, 0x1908($t0)
    ctx->pc = 0x1600acu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6408), (uint16_t)GPR_U32(ctx, 5));
    // 0x1600b0: 0xa505190a  sh          $a1, 0x190A($t0)
    ctx->pc = 0x1600b0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6410), (uint16_t)GPR_U32(ctx, 5));
    // 0x1600b4: 0xa5051cd8  sh          $a1, 0x1CD8($t0)
    ctx->pc = 0x1600b4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 7384), (uint16_t)GPR_U32(ctx, 5));
    // 0x1600b8: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1600B8u;
    {
        const bool branch_taken_0x1600b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1600BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600B8u;
        // 0x1600bc: 0xa5051cda  sh          $a1, 0x1CDA($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 7386), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600b8) {
            ctx->pc = 0x16006Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16006c;
        }
    }
    ctx->pc = 0x1600C0u;
    // 0x1600c0: 0x28c1000a  slti        $at, $a2, 0xA
    ctx->pc = 0x1600c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1600c4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1600C4u;
    {
        const bool branch_taken_0x1600c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600C4u;
        // 0x1600c8: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600c4) {
            ctx->pc = 0x1600FCu;
            goto label_1600fc;
        }
    }
    ctx->pc = 0x1600CCu;
    // 0x1600cc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1600ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1600d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1600d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1600d4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1600d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1600d8: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1600dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1600dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1600e0:
    // 0x1600e0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1600e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1600e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1600e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1600e8: 0xa4650228  sh          $a1, 0x228($v1)
    ctx->pc = 0x1600e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 552), (uint16_t)GPR_U32(ctx, 5));
    // 0x1600ec: 0xa465022a  sh          $a1, 0x22A($v1)
    ctx->pc = 0x1600ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 554), (uint16_t)GPR_U32(ctx, 5));
    // 0x1600f0: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x1600f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1600f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1600F4u;
    {
        const bool branch_taken_0x1600f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1600F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600F4u;
        // 0x1600f8: 0x24e703d0  addiu       $a3, $a3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600f4) {
            ctx->pc = 0x1600E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1600e0;
        }
    }
    ctx->pc = 0x1600FCu;
label_1600fc:
    // 0x1600fc: 0x0  nop
    ctx->pc = 0x1600fcu;
    // NOP
    // 0x160100: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x160100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x160104: 0x8083002c  lb          $v1, 0x2C($a0)
    ctx->pc = 0x160104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x160108: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x160108u;
    {
        const bool branch_taken_0x160108 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160108u;
        // 0x16010c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160108) {
            ctx->pc = 0x160114u;
            goto label_160114;
        }
    }
    ctx->pc = 0x160110u;
    // 0x160110: 0xa083002c  sb          $v1, 0x2C($a0)
    ctx->pc = 0x160110u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 3));
label_160114:
    // 0x160114: 0x3e00008  jr          $ra
    ctx->pc = 0x160114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16011Cu;
}
