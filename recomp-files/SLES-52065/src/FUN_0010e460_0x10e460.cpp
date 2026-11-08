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

// Function: FUN_0010e460
// Address: 0x10e460 - 0x10e530
void FUN_0010e460_0x10e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e460_0x10e460");
#endif

    switch (ctx->pc) {
        case 0x10e460u: goto label_10e460;
        case 0x10e464u: goto label_10e464;
        case 0x10e468u: goto label_10e468;
        case 0x10e46cu: goto label_10e46c;
        case 0x10e470u: goto label_10e470;
        case 0x10e474u: goto label_10e474;
        case 0x10e478u: goto label_10e478;
        case 0x10e47cu: goto label_10e47c;
        case 0x10e480u: goto label_10e480;
        case 0x10e484u: goto label_10e484;
        case 0x10e488u: goto label_10e488;
        case 0x10e48cu: goto label_10e48c;
        case 0x10e490u: goto label_10e490;
        case 0x10e494u: goto label_10e494;
        case 0x10e498u: goto label_10e498;
        case 0x10e49cu: goto label_10e49c;
        case 0x10e4a0u: goto label_10e4a0;
        case 0x10e4a4u: goto label_10e4a4;
        case 0x10e4a8u: goto label_10e4a8;
        case 0x10e4acu: goto label_10e4ac;
        case 0x10e4b0u: goto label_10e4b0;
        case 0x10e4b4u: goto label_10e4b4;
        case 0x10e4b8u: goto label_10e4b8;
        case 0x10e4bcu: goto label_10e4bc;
        case 0x10e4c0u: goto label_10e4c0;
        case 0x10e4c4u: goto label_10e4c4;
        case 0x10e4c8u: goto label_10e4c8;
        case 0x10e4ccu: goto label_10e4cc;
        case 0x10e4d0u: goto label_10e4d0;
        case 0x10e4d4u: goto label_10e4d4;
        case 0x10e4d8u: goto label_10e4d8;
        case 0x10e4dcu: goto label_10e4dc;
        case 0x10e4e0u: goto label_10e4e0;
        case 0x10e4e4u: goto label_10e4e4;
        case 0x10e4e8u: goto label_10e4e8;
        case 0x10e4ecu: goto label_10e4ec;
        case 0x10e4f0u: goto label_10e4f0;
        case 0x10e4f4u: goto label_10e4f4;
        case 0x10e4f8u: goto label_10e4f8;
        case 0x10e4fcu: goto label_10e4fc;
        case 0x10e500u: goto label_10e500;
        case 0x10e504u: goto label_10e504;
        case 0x10e508u: goto label_10e508;
        case 0x10e50cu: goto label_10e50c;
        case 0x10e510u: goto label_10e510;
        case 0x10e514u: goto label_10e514;
        case 0x10e518u: goto label_10e518;
        case 0x10e51cu: goto label_10e51c;
        case 0x10e520u: goto label_10e520;
        case 0x10e524u: goto label_10e524;
        case 0x10e528u: goto label_10e528;
        case 0x10e52cu: goto label_10e52c;
        default: break;
    }

    ctx->pc = 0x10e460u;

label_10e460:
    // 0x10e460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10e464:
    // 0x10e464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10e464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10e468:
    // 0x10e468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10e46c:
    // 0x10e46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10e470:
    // 0x10e470: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x10e470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
label_10e474:
    // 0x10e474: 0x8c860220  lw          $a2, 0x220($a0)
    ctx->pc = 0x10e474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_10e478:
    // 0x10e478: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x10e478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_10e47c:
    // 0x10e47c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10e480:
    if (ctx->pc == 0x10E480u) {
        ctx->pc = 0x10E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E47Cu;
        // 0x10e480: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E484u;
        goto label_10e484;
    }
    ctx->pc = 0x10E47Cu;
    {
        const bool branch_taken_0x10e47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E47Cu;
        // 0x10e480: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e47c) {
            ctx->pc = 0x10E48Cu;
            goto label_10e48c;
        }
    }
    ctx->pc = 0x10E484u;
label_10e484:
    // 0x10e484: 0x10000025  b           . + 4 + (0x25 << 2)
label_10e488:
    if (ctx->pc == 0x10E488u) {
        ctx->pc = 0x10E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E484u;
        // 0x10e488: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E48Cu;
        goto label_10e48c;
    }
    ctx->pc = 0x10E484u;
    {
        const bool branch_taken_0x10e484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E484u;
        // 0x10e488: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e484) {
            ctx->pc = 0x10E51Cu;
            goto label_10e51c;
        }
    }
    ctx->pc = 0x10E48Cu;
label_10e48c:
    // 0x10e48c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e490:
    // 0x10e490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10e490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e494:
    // 0x10e494: 0x1000001b  b           . + 4 + (0x1B << 2)
label_10e498:
    if (ctx->pc == 0x10E498u) {
        ctx->pc = 0x10E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E494u;
        // 0x10e498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E49Cu;
        goto label_10e49c;
    }
    ctx->pc = 0x10E494u;
    {
        const bool branch_taken_0x10e494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E494u;
        // 0x10e498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e494) {
            ctx->pc = 0x10E504u;
            goto label_10e504;
        }
    }
    ctx->pc = 0x10E49Cu;
label_10e49c:
    // 0x10e49c: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x10e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e4a0:
    // 0x10e4a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_10e4a4:
    // 0x10e4a4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x10e4a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e4a8:
    // 0x10e4a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10e4ac:
    // 0x10e4ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e4b0:
    // 0x10e4b0: 0x8c512cd8  lw          $s1, 0x2CD8($v0)
    ctx->pc = 0x10e4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e4b4:
    // 0x10e4b4: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x10e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_10e4b8:
    // 0x10e4b8: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
label_10e4bc:
    if (ctx->pc == 0x10E4BCu) {
        ctx->pc = 0x10E4C0u;
        goto label_10e4c0;
    }
    ctx->pc = 0x10E4B8u;
    {
        const bool branch_taken_0x10e4b8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x10e4b8) {
            ctx->pc = 0x10E4FCu;
            goto label_10e4fc;
        }
    }
    ctx->pc = 0x10E4C0u;
label_10e4c0:
    // 0x10e4c0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x10e4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10e4c4:
    // 0x10e4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e4c8:
    // 0x10e4c8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10e4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10e4cc:
    // 0x10e4cc: 0x320f809  jalr        $t9
label_10e4d0:
    if (ctx->pc == 0x10E4D0u) {
        ctx->pc = 0x10E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4CCu;
        // 0x10e4d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4D4u;
        goto label_10e4d4;
    }
    ctx->pc = 0x10E4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E4D4u);
        ctx->pc = 0x10E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4CCu;
        // 0x10e4d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E4CCu, 0x10E4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E4D4u;
label_10e4d4:
    // 0x10e4d4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_10e4d8:
    // 0x10e4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e4dc:
    // 0x10e4dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10e4dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10e4e0:
    // 0x10e4e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e4e4:
    // 0x10e4e4: 0xc042584  jal         func_109610
label_10e4e8:
    if (ctx->pc == 0x10E4E8u) {
        ctx->pc = 0x10E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4E4u;
        // 0x10e4e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4ECu;
        goto label_10e4ec;
    }
    ctx->pc = 0x10E4E4u;
    SET_GPR_U32(ctx, 31, 0x10E4ECu);
    ctx->pc = 0x10E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E4E4u;
    // 0x10e4e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109610u, 0x10E4E4u, 0x10E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4ECu;
label_10e4ec:
    // 0x10e4ec: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x10e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_10e4f0:
    // 0x10e4f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10e4f4:
    // 0x10e4f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_10e4f8:
    if (ctx->pc == 0x10E4F8u) {
        ctx->pc = 0x10E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F4u;
        // 0x10e4f8: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4FCu;
        goto label_10e4fc;
    }
    ctx->pc = 0x10E4F4u;
    {
        const bool branch_taken_0x10e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F4u;
        // 0x10e4f8: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4f4) {
            ctx->pc = 0x10E514u;
            goto label_10e514;
        }
    }
    ctx->pc = 0x10E4FCu;
label_10e4fc:
    // 0x10e4fc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x10e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_10e500:
    // 0x10e500: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10e500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_10e504:
    // 0x10e504: 0x0  nop
    ctx->pc = 0x10e504u;
    // NOP
label_10e508:
    // 0x10e508: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x10e508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_10e50c:
    // 0x10e50c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_10e510:
    if (ctx->pc == 0x10E510u) {
        ctx->pc = 0x10E514u;
        goto label_10e514;
    }
    ctx->pc = 0x10E50Cu;
    {
        const bool branch_taken_0x10e50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e50c) {
            ctx->pc = 0x10E49Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e49c;
        }
    }
    ctx->pc = 0x10E514u;
label_10e514:
    // 0x10e514: 0x0  nop
    ctx->pc = 0x10e514u;
    // NOP
label_10e518:
    // 0x10e518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e51c:
    // 0x10e51c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10e51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10e520:
    // 0x10e520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10e524:
    // 0x10e524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10e524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10e528:
    // 0x10e528: 0x3e00008  jr          $ra
label_10e52c:
    if (ctx->pc == 0x10E52Cu) {
        ctx->pc = 0x10E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E528u;
        // 0x10e52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E530u;
        goto label_fallthrough_0x10e528;
    }
    ctx->pc = 0x10E528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E528u;
        // 0x10e52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e528:
    ctx->pc = 0x10E530u;
}
