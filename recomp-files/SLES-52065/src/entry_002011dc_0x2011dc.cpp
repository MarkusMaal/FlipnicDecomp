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

// Function: entry_002011dc
// Address: 0x2011dc - 0x201220
void entry_002011dc_0x2011dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002011dc_0x2011dc");
#endif

    switch (ctx->pc) {
        case 0x2011f8u: goto label_2011f8;
        default: break;
    }

    ctx->pc = 0x2011dcu;

label_2011dc:
    // 0x2011dc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2011dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2011e0:
    // 0x2011e0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2011e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2011e4:
    // 0x2011e4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2011e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2011e8:
    // 0x2011e8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2011e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2011ec:
    // 0x2011ec: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2011ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2011f0:
    // 0x2011f0: 0x40f809  jalr        $v0
label_2011f4:
    if (ctx->pc == 0x2011F4u) {
        ctx->pc = 0x2011F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011F0u;
        // 0x2011f4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011F8u;
        goto label_2011f8;
    }
    ctx->pc = 0x2011F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2011F8u);
        ctx->pc = 0x2011F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011F0u;
        // 0x2011f4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2011F0u, 0x2011F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2011F8u;
label_2011f8:
    // 0x2011f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2011f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2011fc:
    // 0x2011fc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2011fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_201200:
    // 0x201200: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x201200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_201204:
    // 0x201204: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x201204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
label_201208:
    // 0x201208: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_20120c:
    if (ctx->pc == 0x20120Cu) {
        ctx->pc = 0x20120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201208u;
        // 0x20120c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201210u;
        goto label_201210;
    }
    ctx->pc = 0x201208u;
    {
        const bool branch_taken_0x201208 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201208u;
        // 0x20120c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201208) {
            ctx->pc = 0x20122Cu;
            return;
        }
    }
    ctx->pc = 0x201210u;
label_201210:
    // 0x201210: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_201214:
    if (ctx->pc == 0x201214u) {
        ctx->pc = 0x201214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201210u;
        // 0x201214: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x201218u;
        goto label_201218;
    }
    ctx->pc = 0x201210u;
    {
        const bool branch_taken_0x201210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x201210) {
            ctx->pc = 0x201214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201210u;
            // 0x201214: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x201220u;
            return;
        }
    }
    ctx->pc = 0x201218u;
label_201218:
    // 0x201218: 0x10000002  b           . + 4 + (0x2 << 2)
label_20121c:
    if (ctx->pc == 0x20121Cu) {
        ctx->pc = 0x20121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201218u;
        // 0x20121c: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x201220u;
        goto label_fallthrough_0x201218;
    }
    ctx->pc = 0x201218u;
    {
        const bool branch_taken_0x201218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201218u;
        // 0x20121c: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201218) {
            ctx->pc = 0x201224u;
            return;
        }
    }
label_fallthrough_0x201218:
    ctx->pc = 0x201220u;
}
