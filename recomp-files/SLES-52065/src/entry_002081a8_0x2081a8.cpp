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

// Function: entry_002081a8
// Address: 0x2081a8 - 0x208278
void entry_002081a8_0x2081a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002081a8_0x2081a8");
#endif

    switch (ctx->pc) {
        case 0x2081d0u: goto label_2081d0;
        case 0x2081e0u: goto label_2081e0;
        case 0x2081f0u: goto label_2081f0;
        case 0x208200u: goto label_208200;
        default: break;
    }

    ctx->pc = 0x2081a8u;

    // 0x2081a8: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x2081a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x2081ac: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x2081acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x2081b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2081b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2081b4: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x2081b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x2081b8: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x2081b8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x2081bc: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x2081bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x2081c0: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x2081c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x2081c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2081c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081c8: 0xc081c20  jal         func_207080
    ctx->pc = 0x2081C8u;
    SET_GPR_U32(ctx, 31, 0x2081D0u);
    ctx->pc = 0x2081CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081C8u;
    // 0x2081cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x2081C8u, 0x2081D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081D0u;
label_2081d0:
    // 0x2081d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2081d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2081d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081d8: 0xc081c20  jal         func_207080
    ctx->pc = 0x2081D8u;
    SET_GPR_U32(ctx, 31, 0x2081E0u);
    ctx->pc = 0x2081DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081D8u;
    // 0x2081dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x2081D8u, 0x2081E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081E0u;
label_2081e0:
    // 0x2081e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2081e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2081e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081e8: 0xc081c20  jal         func_207080
    ctx->pc = 0x2081E8u;
    SET_GPR_U32(ctx, 31, 0x2081F0u);
    ctx->pc = 0x2081ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081E8u;
    // 0x2081ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x2081E8u, 0x2081F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081F0u;
label_2081f0:
    // 0x2081f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2081f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2081f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081f8: 0xc081c20  jal         func_207080
    ctx->pc = 0x2081F8u;
    SET_GPR_U32(ctx, 31, 0x208200u);
    ctx->pc = 0x2081FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081F8u;
    // 0x2081fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x2081F8u, 0x208200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208200u;
label_208200:
    // 0x208200: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x208200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x208204: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x208204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208208: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x208208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x20820c: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x20820cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x208210: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x208210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x208214: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x208214u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x208218: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x208218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20821c: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x20821cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x208220: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x208220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208224: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x208224u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x208228: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x208228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x20822c: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x20822cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x208230: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x208230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x208234: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x208234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x208238: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x208238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x20823c: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x20823cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x208240: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x208240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x208244: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x208244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x208248: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x208248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20824c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208250: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x208250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x208254: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x208254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x208258: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x208258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x20825c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20825Cu;
    {
        const bool branch_taken_0x20825c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20825Cu;
        // 0x208260: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20825c) {
            ctx->pc = 0x2082A4u;
            return;
        }
    }
    ctx->pc = 0x208264u;
    // 0x208264: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x208264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x208268: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x208268u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x20826c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20826cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208270: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x208270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x208274: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x208274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x208278u;
}
