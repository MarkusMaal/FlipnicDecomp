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

// Function: entry_0015f358
// Address: 0x15f358 - 0x15f418
void entry_0015f358_0x15f358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f358_0x15f358");
#endif

    switch (ctx->pc) {
        case 0x15f398u: goto label_15f398;
        case 0x15f3e0u: goto label_15f3e0;
        default: break;
    }

    ctx->pc = 0x15f358u;

label_15f358:
    // 0x15f358: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f35c:
    // 0x15f35c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f360:
    // 0x15f360: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f364:
    // 0x15f364: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f368:
    // 0x15f368: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_15f36c:
    if (ctx->pc == 0x15F36Cu) {
        ctx->pc = 0x15F370u;
        goto label_15f370;
    }
    ctx->pc = 0x15F368u;
    {
        const bool branch_taken_0x15f368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f368) {
            ctx->pc = 0x15F434u;
            return;
        }
    }
    ctx->pc = 0x15F370u;
label_15f370:
    // 0x15f370: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f374:
    // 0x15f374: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f378:
    // 0x15f378: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f37c:
    // 0x15f37c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f380:
    // 0x15f380: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f384:
    // 0x15f384: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f388:
    // 0x15f388: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f38c:
    // 0x15f38c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15f390:
    // 0x15f390: 0x320f809  jalr        $t9
label_15f394:
    if (ctx->pc == 0x15F394u) {
        ctx->pc = 0x15F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F390u;
        // 0x15f394: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F398u;
        goto label_15f398;
    }
    ctx->pc = 0x15F390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F398u);
        ctx->pc = 0x15F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F390u;
        // 0x15f394: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F390u, 0x15F398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F398u;
label_15f398:
    // 0x15f398: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15f398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15f39c:
    // 0x15f39c: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
label_15f3a0:
    if (ctx->pc == 0x15F3A0u) {
        ctx->pc = 0x15F3A4u;
        goto label_15f3a4;
    }
    ctx->pc = 0x15F39Cu;
    {
        const bool branch_taken_0x15f39c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f39c) {
            ctx->pc = 0x15F434u;
            return;
        }
    }
    ctx->pc = 0x15F3A4u;
label_15f3a4:
    // 0x15f3a4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f3a8:
    // 0x15f3a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15f3ac:
    // 0x15f3ac: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f3b0:
    // 0x15f3b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f3b4:
    // 0x15f3b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f3b8:
    // 0x15f3b8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f3bc:
    // 0x15f3bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f3c0:
    // 0x15f3c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f3c4:
    // 0x15f3c4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f3c8:
    // 0x15f3c8: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15f3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15f3cc:
    // 0x15f3cc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15f3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f3d0:
    // 0x15f3d0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f3d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f3d4:
    // 0x15f3d4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15f3d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15f3d8:
    // 0x15f3d8: 0x320f809  jalr        $t9
label_15f3dc:
    if (ctx->pc == 0x15F3DCu) {
        ctx->pc = 0x15F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3D8u;
        // 0x15f3dc: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3E0u;
        goto label_15f3e0;
    }
    ctx->pc = 0x15F3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F3E0u);
        ctx->pc = 0x15F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3D8u;
        // 0x15f3dc: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F3D8u, 0x15F3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F3E0u;
label_15f3e0:
    // 0x15f3e0: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f3e4:
    // 0x15f3e4: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_15f3e8:
    if (ctx->pc == 0x15F3E8u) {
        ctx->pc = 0x15F3ECu;
        goto label_15f3ec;
    }
    ctx->pc = 0x15F3E4u;
    {
        const bool branch_taken_0x15f3e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f3e4) {
            ctx->pc = 0x15F434u;
            return;
        }
    }
    ctx->pc = 0x15F3ECu;
label_15f3ec:
    // 0x15f3ec: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15f3f0:
    if (ctx->pc == 0x15F3F0u) {
        ctx->pc = 0x15F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3ECu;
        // 0x15f3f0: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3F4u;
        goto label_15f3f4;
    }
    ctx->pc = 0x15F3ECu;
    {
        const bool branch_taken_0x15f3ec = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3ECu;
        // 0x15f3f0: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3ec) {
            ctx->pc = 0x15F418u;
            return;
        }
    }
    ctx->pc = 0x15F3F4u;
label_15f3f4:
    // 0x15f3f4: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f3f8:
    // 0x15f3f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f3fc:
    // 0x15f3fc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f400:
    // 0x15f400: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f404:
    // 0x15f404: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15f404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f408:
    // 0x15f408: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15f408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15f40c:
    // 0x15f40c: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15f410:
    if (ctx->pc == 0x15F410u) {
        ctx->pc = 0x15F414u;
        goto label_15f414;
    }
    ctx->pc = 0x15F40Cu;
    {
        const bool branch_taken_0x15f40c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15f40c) {
            ctx->pc = 0x15F418u;
            return;
        }
    }
    ctx->pc = 0x15F414u;
label_15f414:
    // 0x15f414: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15f414u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15f418u;
}
