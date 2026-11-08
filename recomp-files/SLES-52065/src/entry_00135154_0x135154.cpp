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

// Function: entry_00135154
// Address: 0x135154 - 0x1351c8
void entry_00135154_0x135154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135154_0x135154");
#endif

    switch (ctx->pc) {
        case 0x135174u: goto label_135174;
        case 0x135180u: goto label_135180;
        case 0x13518cu: goto label_13518c;
        case 0x13519cu: goto label_13519c;
        case 0x1351b4u: goto label_1351b4;
        default: break;
    }

    ctx->pc = 0x135154u;

    // 0x135154: 0x92420092  lbu         $v0, 0x92($s2)
    ctx->pc = 0x135154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x135158: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x135158u;
    {
        const bool branch_taken_0x135158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135158) {
            ctx->pc = 0x1351F8u;
            return;
        }
    }
    ctx->pc = 0x135160u;
    // 0x135160: 0x92420054  lbu         $v0, 0x54($s2)
    ctx->pc = 0x135160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x135164: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x135164u;
    {
        const bool branch_taken_0x135164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135164u;
        // 0x135168: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135164) {
            ctx->pc = 0x1351F8u;
            return;
        }
    }
    ctx->pc = 0x13516Cu;
    // 0x13516c: 0xc061c6c  jal         func_1871B0
    ctx->pc = 0x13516Cu;
    SET_GPR_U32(ctx, 31, 0x135174u);
    ctx->pc = 0x1871B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871B0u, 0x13516Cu, 0x135174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135174u;
label_135174:
    // 0x135174: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x135174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x135178: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x135178u;
    SET_GPR_U32(ctx, 31, 0x135180u);
    ctx->pc = 0x13517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135178u;
    // 0x13517c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x135178u, 0x135180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135180u;
label_135180:
    // 0x135180: 0x8e450098  lw          $a1, 0x98($s2)
    ctx->pc = 0x135180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x135184: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x135184u;
    SET_GPR_U32(ctx, 31, 0x13518Cu);
    ctx->pc = 0x135188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135184u;
    // 0x135188: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x135184u, 0x13518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13518Cu;
label_13518c:
    // 0x13518c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x13518cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x135190: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x135190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x135194: 0xc080874  jal         func_2021D0
    ctx->pc = 0x135194u;
    SET_GPR_U32(ctx, 31, 0x13519Cu);
    ctx->pc = 0x135198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135194u;
    // 0x135198: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x135194u, 0x13519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13519Cu;
label_13519c:
    // 0x13519c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x13519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1351a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1351a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1351a4: 0x24a5eea8  addiu       $a1, $a1, -0x1158
    ctx->pc = 0x1351a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
    // 0x1351a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1351a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1351ac: 0xc0805e6  jal         func_201798
    ctx->pc = 0x1351ACu;
    SET_GPR_U32(ctx, 31, 0x1351B4u);
    ctx->pc = 0x1351B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351ACu;
    // 0x1351b0: 0x27a60138  addiu       $a2, $sp, 0x138 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x1351ACu, 0x1351B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351B4u;
label_1351b4:
    // 0x1351b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1351B4u;
    {
        const bool branch_taken_0x1351b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1351b4) {
            ctx->pc = 0x1351C8u;
            return;
        }
    }
    ctx->pc = 0x1351BCu;
    // 0x1351bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1351bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1351c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1351C0u;
    {
        const bool branch_taken_0x1351c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1351C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351C0u;
        // 0x1351c4: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351c0) {
            ctx->pc = 0x1351E4u;
            return;
        }
    }
    ctx->pc = 0x1351C8u;
}
