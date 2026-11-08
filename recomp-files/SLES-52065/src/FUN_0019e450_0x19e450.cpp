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

// Function: FUN_0019e450
// Address: 0x19e450 - 0x19e7a4
void FUN_0019e450_0x19e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e450_0x19e450");
#endif

    switch (ctx->pc) {
        case 0x19e450u: goto label_19e450;
        case 0x19e454u: goto label_19e454;
        case 0x19e458u: goto label_19e458;
        case 0x19e45cu: goto label_19e45c;
        case 0x19e460u: goto label_19e460;
        case 0x19e464u: goto label_19e464;
        case 0x19e468u: goto label_19e468;
        case 0x19e46cu: goto label_19e46c;
        case 0x19e470u: goto label_19e470;
        case 0x19e474u: goto label_19e474;
        case 0x19e478u: goto label_19e478;
        case 0x19e47cu: goto label_19e47c;
        case 0x19e480u: goto label_19e480;
        case 0x19e484u: goto label_19e484;
        case 0x19e488u: goto label_19e488;
        case 0x19e48cu: goto label_19e48c;
        case 0x19e490u: goto label_19e490;
        case 0x19e494u: goto label_19e494;
        case 0x19e498u: goto label_19e498;
        case 0x19e49cu: goto label_19e49c;
        case 0x19e4a0u: goto label_19e4a0;
        case 0x19e4a4u: goto label_19e4a4;
        case 0x19e4a8u: goto label_19e4a8;
        case 0x19e4acu: goto label_19e4ac;
        case 0x19e4b0u: goto label_19e4b0;
        case 0x19e4b4u: goto label_19e4b4;
        case 0x19e4b8u: goto label_19e4b8;
        case 0x19e4bcu: goto label_19e4bc;
        case 0x19e4c0u: goto label_19e4c0;
        case 0x19e4c4u: goto label_19e4c4;
        case 0x19e4c8u: goto label_19e4c8;
        case 0x19e4ccu: goto label_19e4cc;
        case 0x19e4d0u: goto label_19e4d0;
        case 0x19e4d4u: goto label_19e4d4;
        case 0x19e4d8u: goto label_19e4d8;
        case 0x19e4dcu: goto label_19e4dc;
        case 0x19e4e0u: goto label_19e4e0;
        case 0x19e4e4u: goto label_19e4e4;
        case 0x19e4e8u: goto label_19e4e8;
        case 0x19e4ecu: goto label_19e4ec;
        case 0x19e4f0u: goto label_19e4f0;
        case 0x19e4f4u: goto label_19e4f4;
        case 0x19e4f8u: goto label_19e4f8;
        case 0x19e4fcu: goto label_19e4fc;
        case 0x19e500u: goto label_19e500;
        case 0x19e504u: goto label_19e504;
        case 0x19e508u: goto label_19e508;
        case 0x19e50cu: goto label_19e50c;
        case 0x19e510u: goto label_19e510;
        case 0x19e514u: goto label_19e514;
        case 0x19e518u: goto label_19e518;
        case 0x19e51cu: goto label_19e51c;
        case 0x19e520u: goto label_19e520;
        case 0x19e524u: goto label_19e524;
        case 0x19e528u: goto label_19e528;
        case 0x19e52cu: goto label_19e52c;
        case 0x19e530u: goto label_19e530;
        case 0x19e534u: goto label_19e534;
        case 0x19e538u: goto label_19e538;
        case 0x19e53cu: goto label_19e53c;
        case 0x19e540u: goto label_19e540;
        case 0x19e544u: goto label_19e544;
        case 0x19e548u: goto label_19e548;
        case 0x19e54cu: goto label_19e54c;
        case 0x19e550u: goto label_19e550;
        case 0x19e554u: goto label_19e554;
        case 0x19e558u: goto label_19e558;
        case 0x19e55cu: goto label_19e55c;
        case 0x19e560u: goto label_19e560;
        case 0x19e564u: goto label_19e564;
        case 0x19e568u: goto label_19e568;
        case 0x19e56cu: goto label_19e56c;
        case 0x19e570u: goto label_19e570;
        case 0x19e574u: goto label_19e574;
        case 0x19e578u: goto label_19e578;
        case 0x19e57cu: goto label_19e57c;
        case 0x19e580u: goto label_19e580;
        case 0x19e584u: goto label_19e584;
        case 0x19e588u: goto label_19e588;
        case 0x19e58cu: goto label_19e58c;
        case 0x19e590u: goto label_19e590;
        case 0x19e594u: goto label_19e594;
        case 0x19e598u: goto label_19e598;
        case 0x19e59cu: goto label_19e59c;
        case 0x19e5a0u: goto label_19e5a0;
        case 0x19e5a4u: goto label_19e5a4;
        case 0x19e5a8u: goto label_19e5a8;
        case 0x19e5acu: goto label_19e5ac;
        case 0x19e5b0u: goto label_19e5b0;
        case 0x19e5b4u: goto label_19e5b4;
        case 0x19e5b8u: goto label_19e5b8;
        case 0x19e5bcu: goto label_19e5bc;
        case 0x19e5c0u: goto label_19e5c0;
        case 0x19e5c4u: goto label_19e5c4;
        case 0x19e5c8u: goto label_19e5c8;
        case 0x19e5ccu: goto label_19e5cc;
        case 0x19e5d0u: goto label_19e5d0;
        case 0x19e5d4u: goto label_19e5d4;
        case 0x19e5d8u: goto label_19e5d8;
        case 0x19e5dcu: goto label_19e5dc;
        case 0x19e5e0u: goto label_19e5e0;
        case 0x19e5e4u: goto label_19e5e4;
        case 0x19e5e8u: goto label_19e5e8;
        case 0x19e5ecu: goto label_19e5ec;
        case 0x19e5f0u: goto label_19e5f0;
        case 0x19e5f4u: goto label_19e5f4;
        case 0x19e5f8u: goto label_19e5f8;
        case 0x19e5fcu: goto label_19e5fc;
        case 0x19e600u: goto label_19e600;
        case 0x19e604u: goto label_19e604;
        case 0x19e608u: goto label_19e608;
        case 0x19e60cu: goto label_19e60c;
        case 0x19e610u: goto label_19e610;
        case 0x19e614u: goto label_19e614;
        case 0x19e618u: goto label_19e618;
        case 0x19e61cu: goto label_19e61c;
        case 0x19e620u: goto label_19e620;
        case 0x19e624u: goto label_19e624;
        case 0x19e628u: goto label_19e628;
        case 0x19e62cu: goto label_19e62c;
        case 0x19e630u: goto label_19e630;
        case 0x19e634u: goto label_19e634;
        case 0x19e638u: goto label_19e638;
        case 0x19e63cu: goto label_19e63c;
        case 0x19e640u: goto label_19e640;
        case 0x19e644u: goto label_19e644;
        case 0x19e648u: goto label_19e648;
        case 0x19e64cu: goto label_19e64c;
        case 0x19e650u: goto label_19e650;
        case 0x19e654u: goto label_19e654;
        case 0x19e658u: goto label_19e658;
        case 0x19e65cu: goto label_19e65c;
        case 0x19e660u: goto label_19e660;
        case 0x19e664u: goto label_19e664;
        case 0x19e668u: goto label_19e668;
        case 0x19e66cu: goto label_19e66c;
        case 0x19e670u: goto label_19e670;
        case 0x19e674u: goto label_19e674;
        case 0x19e678u: goto label_19e678;
        case 0x19e67cu: goto label_19e67c;
        case 0x19e680u: goto label_19e680;
        case 0x19e684u: goto label_19e684;
        case 0x19e688u: goto label_19e688;
        case 0x19e68cu: goto label_19e68c;
        case 0x19e690u: goto label_19e690;
        case 0x19e694u: goto label_19e694;
        case 0x19e698u: goto label_19e698;
        case 0x19e69cu: goto label_19e69c;
        case 0x19e6a0u: goto label_19e6a0;
        case 0x19e6a4u: goto label_19e6a4;
        case 0x19e6a8u: goto label_19e6a8;
        case 0x19e6acu: goto label_19e6ac;
        case 0x19e6b0u: goto label_19e6b0;
        case 0x19e6b4u: goto label_19e6b4;
        case 0x19e6b8u: goto label_19e6b8;
        case 0x19e6bcu: goto label_19e6bc;
        case 0x19e6c0u: goto label_19e6c0;
        case 0x19e6c4u: goto label_19e6c4;
        case 0x19e6c8u: goto label_19e6c8;
        case 0x19e6ccu: goto label_19e6cc;
        case 0x19e6d0u: goto label_19e6d0;
        case 0x19e6d4u: goto label_19e6d4;
        case 0x19e6d8u: goto label_19e6d8;
        case 0x19e6dcu: goto label_19e6dc;
        case 0x19e6e0u: goto label_19e6e0;
        case 0x19e6e4u: goto label_19e6e4;
        case 0x19e6e8u: goto label_19e6e8;
        case 0x19e6ecu: goto label_19e6ec;
        case 0x19e6f0u: goto label_19e6f0;
        case 0x19e6f4u: goto label_19e6f4;
        case 0x19e6f8u: goto label_19e6f8;
        case 0x19e6fcu: goto label_19e6fc;
        case 0x19e700u: goto label_19e700;
        case 0x19e704u: goto label_19e704;
        case 0x19e708u: goto label_19e708;
        case 0x19e70cu: goto label_19e70c;
        case 0x19e710u: goto label_19e710;
        case 0x19e714u: goto label_19e714;
        case 0x19e718u: goto label_19e718;
        case 0x19e71cu: goto label_19e71c;
        case 0x19e720u: goto label_19e720;
        case 0x19e724u: goto label_19e724;
        case 0x19e728u: goto label_19e728;
        case 0x19e72cu: goto label_19e72c;
        case 0x19e730u: goto label_19e730;
        case 0x19e734u: goto label_19e734;
        case 0x19e738u: goto label_19e738;
        case 0x19e73cu: goto label_19e73c;
        case 0x19e740u: goto label_19e740;
        case 0x19e744u: goto label_19e744;
        case 0x19e748u: goto label_19e748;
        case 0x19e74cu: goto label_19e74c;
        case 0x19e750u: goto label_19e750;
        case 0x19e754u: goto label_19e754;
        case 0x19e758u: goto label_19e758;
        case 0x19e75cu: goto label_19e75c;
        case 0x19e760u: goto label_19e760;
        case 0x19e764u: goto label_19e764;
        case 0x19e768u: goto label_19e768;
        case 0x19e76cu: goto label_19e76c;
        case 0x19e770u: goto label_19e770;
        case 0x19e774u: goto label_19e774;
        case 0x19e778u: goto label_19e778;
        case 0x19e77cu: goto label_19e77c;
        case 0x19e780u: goto label_19e780;
        case 0x19e784u: goto label_19e784;
        case 0x19e788u: goto label_19e788;
        case 0x19e78cu: goto label_19e78c;
        case 0x19e790u: goto label_19e790;
        case 0x19e794u: goto label_19e794;
        case 0x19e798u: goto label_19e798;
        case 0x19e79cu: goto label_19e79c;
        case 0x19e7a0u: goto label_19e7a0;
        default: break;
    }

    ctx->pc = 0x19e450u;

label_19e450:
    // 0x19e450: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19e450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_19e454:
    // 0x19e454: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19e454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_19e458:
    // 0x19e458: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19e458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_19e45c:
    // 0x19e45c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19e45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_19e460:
    // 0x19e460: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19e460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_19e464:
    // 0x19e464: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19e464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19e468:
    // 0x19e468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19e468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19e46c:
    // 0x19e46c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19e470:
    // 0x19e470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19e474:
    // 0x19e474: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19e478:
    // 0x19e478: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19e478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e47c:
    // 0x19e47c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19e47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19e480:
    // 0x19e480: 0xc063dd4  jal         func_18F750
label_19e484:
    if (ctx->pc == 0x19E484u) {
        ctx->pc = 0x19E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E480u;
        // 0x19e484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E488u;
        goto label_19e488;
    }
    ctx->pc = 0x19E480u;
    SET_GPR_U32(ctx, 31, 0x19E488u);
    ctx->pc = 0x19E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E480u;
    // 0x19e484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19E480u, 0x19E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E488u;
label_19e488:
    // 0x19e488: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19e488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19e48c:
    // 0x19e48c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x19e48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_19e490:
    // 0x19e490: 0x104400b9  beq         $v0, $a0, . + 4 + (0xB9 << 2)
label_19e494:
    if (ctx->pc == 0x19E494u) {
        ctx->pc = 0x19E498u;
        goto label_19e498;
    }
    ctx->pc = 0x19E490u;
    {
        const bool branch_taken_0x19e490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x19e490) {
            ctx->pc = 0x19E778u;
            goto label_19e778;
        }
    }
    ctx->pc = 0x19E498u;
label_19e498:
    // 0x19e498: 0x104300b7  beq         $v0, $v1, . + 4 + (0xB7 << 2)
label_19e49c:
    if (ctx->pc == 0x19E49Cu) {
        ctx->pc = 0x19E4A0u;
        goto label_19e4a0;
    }
    ctx->pc = 0x19E498u;
    {
        const bool branch_taken_0x19e498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19e498) {
            ctx->pc = 0x19E778u;
            goto label_19e778;
        }
    }
    ctx->pc = 0x19E4A0u;
label_19e4a0:
    // 0x19e4a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19e4a4:
    // 0x19e4a4: 0x104300ad  beq         $v0, $v1, . + 4 + (0xAD << 2)
label_19e4a8:
    if (ctx->pc == 0x19E4A8u) {
        ctx->pc = 0x19E4ACu;
        goto label_19e4ac;
    }
    ctx->pc = 0x19E4A4u;
    {
        const bool branch_taken_0x19e4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19e4a4) {
            ctx->pc = 0x19E75Cu;
            goto label_19e75c;
        }
    }
    ctx->pc = 0x19E4ACu;
label_19e4ac:
    // 0x19e4ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e4b0:
    // 0x19e4b0: 0x10430078  beq         $v0, $v1, . + 4 + (0x78 << 2)
label_19e4b4:
    if (ctx->pc == 0x19E4B4u) {
        ctx->pc = 0x19E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4B0u;
        // 0x19e4b4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4B8u;
        goto label_19e4b8;
    }
    ctx->pc = 0x19E4B0u;
    {
        const bool branch_taken_0x19e4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4B0u;
        // 0x19e4b4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4b0) {
            ctx->pc = 0x19E694u;
            goto label_19e694;
        }
    }
    ctx->pc = 0x19E4B8u;
label_19e4b8:
    // 0x19e4b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19e4bc:
    // 0x19e4bc: 0x10430043  beq         $v0, $v1, . + 4 + (0x43 << 2)
label_19e4c0:
    if (ctx->pc == 0x19E4C0u) {
        ctx->pc = 0x19E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4BCu;
        // 0x19e4c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4C4u;
        goto label_19e4c4;
    }
    ctx->pc = 0x19E4BCu;
    {
        const bool branch_taken_0x19e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4BCu;
        // 0x19e4c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4bc) {
            ctx->pc = 0x19E5CCu;
            goto label_19e5cc;
        }
    }
    ctx->pc = 0x19E4C4u;
label_19e4c4:
    // 0x19e4c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e4c8:
    // 0x19e4c8: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
label_19e4cc:
    if (ctx->pc == 0x19E4CCu) {
        ctx->pc = 0x19E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4C8u;
        // 0x19e4cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4D0u;
        goto label_19e4d0;
    }
    ctx->pc = 0x19E4C8u;
    {
        const bool branch_taken_0x19e4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4C8u;
        // 0x19e4cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4c8) {
            ctx->pc = 0x19E564u;
            goto label_19e564;
        }
    }
    ctx->pc = 0x19E4D0u;
label_19e4d0:
    // 0x19e4d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19e4d4:
    if (ctx->pc == 0x19E4D4u) {
        ctx->pc = 0x19E4D8u;
        goto label_19e4d8;
    }
    ctx->pc = 0x19E4D0u;
    {
        const bool branch_taken_0x19e4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e4d0) {
            ctx->pc = 0x19E4E0u;
            goto label_19e4e0;
        }
    }
    ctx->pc = 0x19E4D8u;
label_19e4d8:
    // 0x19e4d8: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_19e4dc:
    if (ctx->pc == 0x19E4DCu) {
        ctx->pc = 0x19E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4D8u;
        // 0x19e4dc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4E0u;
        goto label_19e4e0;
    }
    ctx->pc = 0x19E4D8u;
    {
        const bool branch_taken_0x19e4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4D8u;
        // 0x19e4dc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4d8) {
            ctx->pc = 0x19E77Cu;
            goto label_19e77c;
        }
    }
    ctx->pc = 0x19E4E0u;
label_19e4e0:
    // 0x19e4e0: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_19e4e4:
    // 0x19e4e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19e4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e4e8:
    // 0x19e4e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19e4e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e4ec:
    // 0x19e4ec: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x19e4ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_19e4f0:
    // 0x19e4f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x19e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19e4f4:
    // 0x19e4f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19e4f8:
    // 0x19e4f8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_19e4fc:
    if (ctx->pc == 0x19E4FCu) {
        ctx->pc = 0x19E500u;
        goto label_19e500;
    }
    ctx->pc = 0x19E4F8u;
    {
        const bool branch_taken_0x19e4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e4f8) {
            ctx->pc = 0x19E528u;
            goto label_19e528;
        }
    }
    ctx->pc = 0x19E500u;
label_19e500:
    // 0x19e500: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x19e500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_19e504:
    // 0x19e504: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x19e504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_19e508:
    // 0x19e508: 0xc057040  jal         func_15C100
label_19e50c:
    if (ctx->pc == 0x19E50Cu) {
        ctx->pc = 0x19E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E508u;
        // 0x19e50c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E510u;
        goto label_19e510;
    }
    ctx->pc = 0x19E508u;
    SET_GPR_U32(ctx, 31, 0x19E510u);
    ctx->pc = 0x19E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E508u;
    // 0x19e50c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19E508u, 0x19E510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E510u;
label_19e510:
    // 0x19e510: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x19e510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_19e514:
    // 0x19e514: 0xac620674  sw          $v0, 0x674($v1)
    ctx->pc = 0x19e514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1652), GPR_U32(ctx, 2));
label_19e518:
    // 0x19e518: 0xac730974  sw          $s3, 0x974($v1)
    ctx->pc = 0x19e518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2420), GPR_U32(ctx, 19));
label_19e51c:
    // 0x19e51c: 0xac600774  sw          $zero, 0x774($v1)
    ctx->pc = 0x19e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1908), GPR_U32(ctx, 0));
label_19e520:
    // 0x19e520: 0x10000003  b           . + 4 + (0x3 << 2)
label_19e524:
    if (ctx->pc == 0x19E524u) {
        ctx->pc = 0x19E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E520u;
        // 0x19e524: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E528u;
        goto label_19e528;
    }
    ctx->pc = 0x19E520u;
    {
        const bool branch_taken_0x19e520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E520u;
        // 0x19e524: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e520) {
            ctx->pc = 0x19E530u;
            goto label_19e530;
        }
    }
    ctx->pc = 0x19E528u;
label_19e528:
    // 0x19e528: 0x10000005  b           . + 4 + (0x5 << 2)
label_19e52c:
    if (ctx->pc == 0x19E52Cu) {
        ctx->pc = 0x19E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E528u;
        // 0x19e52c: 0xae320670  sw          $s2, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E530u;
        goto label_19e530;
    }
    ctx->pc = 0x19E528u;
    {
        const bool branch_taken_0x19e528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E528u;
        // 0x19e52c: 0xae320670  sw          $s2, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e528) {
            ctx->pc = 0x19E540u;
            goto label_19e540;
        }
    }
    ctx->pc = 0x19E530u;
label_19e530:
    // 0x19e530: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e534:
    // 0x19e534: 0x2a420040  slti        $v0, $s2, 0x40
    ctx->pc = 0x19e534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
label_19e538:
    // 0x19e538: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_19e53c:
    if (ctx->pc == 0x19E53Cu) {
        ctx->pc = 0x19E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E538u;
        // 0x19e53c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E540u;
        goto label_19e540;
    }
    ctx->pc = 0x19E538u;
    {
        const bool branch_taken_0x19e538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E538u;
        // 0x19e53c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e538) {
            ctx->pc = 0x19E4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e4f0;
        }
    }
    ctx->pc = 0x19E540u;
label_19e540:
    // 0x19e540: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19e540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_19e544:
    // 0x19e544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e548:
    // 0x19e548: 0xc063e20  jal         func_18F880
label_19e54c:
    if (ctx->pc == 0x19E54Cu) {
        ctx->pc = 0x19E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E548u;
        // 0x19e54c: 0x34450002  ori         $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E550u;
        goto label_19e550;
    }
    ctx->pc = 0x19E548u;
    SET_GPR_U32(ctx, 31, 0x19E550u);
    ctx->pc = 0x19E54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E548u;
    // 0x19e54c: 0x34450002  ori         $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F880u, 0x19E548u, 0x19E550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E550u;
label_19e550:
    // 0x19e550: 0xc063e14  jal         func_18F850
label_19e554:
    if (ctx->pc == 0x19E554u) {
        ctx->pc = 0x19E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E550u;
        // 0x19e554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E558u;
        goto label_19e558;
    }
    ctx->pc = 0x19E550u;
    SET_GPR_U32(ctx, 31, 0x19E558u);
    ctx->pc = 0x19E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E550u;
    // 0x19e554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19E550u, 0x19E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E558u;
label_19e558:
    // 0x19e558: 0x10000087  b           . + 4 + (0x87 << 2)
label_19e55c:
    if (ctx->pc == 0x19E55Cu) {
        ctx->pc = 0x19E560u;
        goto label_19e560;
    }
    ctx->pc = 0x19E558u;
    {
        const bool branch_taken_0x19e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e558) {
            ctx->pc = 0x19E778u;
            goto label_19e778;
        }
    }
    ctx->pc = 0x19E560u;
label_19e560:
    // 0x19e560: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19e560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e564:
    // 0x19e564: 0x10000010  b           . + 4 + (0x10 << 2)
label_19e568:
    if (ctx->pc == 0x19E568u) {
        ctx->pc = 0x19E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E564u;
        // 0x19e568: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E56Cu;
        goto label_19e56c;
    }
    ctx->pc = 0x19E564u;
    {
        const bool branch_taken_0x19e564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E564u;
        // 0x19e568: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e564) {
            ctx->pc = 0x19E5A8u;
            goto label_19e5a8;
        }
    }
    ctx->pc = 0x19E56Cu;
label_19e56c:
    // 0x19e56c: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x19e56cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_19e570:
    // 0x19e570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e574:
    // 0x19e574: 0x8e820974  lw          $v0, 0x974($s4)
    ctx->pc = 0x19e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2420)));
label_19e578:
    // 0x19e578: 0x268b0974  addiu       $t3, $s4, 0x974
    ctx->pc = 0x19e578u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 2420));
label_19e57c:
    // 0x19e57c: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x19e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_19e580:
    // 0x19e580: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x19e580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_19e584:
    // 0x19e584: 0x8c470030  lw          $a3, 0x30($v0)
    ctx->pc = 0x19e584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19e588:
    // 0x19e588: 0x8c480034  lw          $t0, 0x34($v0)
    ctx->pc = 0x19e588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_19e58c:
    // 0x19e58c: 0x8c490038  lw          $t1, 0x38($v0)
    ctx->pc = 0x19e58cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_19e590:
    // 0x19e590: 0xc064d10  jal         func_193440
label_19e594:
    if (ctx->pc == 0x19E594u) {
        ctx->pc = 0x19E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E590u;
        // 0x19e594: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E598u;
        goto label_19e598;
    }
    ctx->pc = 0x19E590u;
    SET_GPR_U32(ctx, 31, 0x19E598u);
    ctx->pc = 0x19E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E590u;
    // 0x19e594: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x19E590u, 0x19E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E598u;
label_19e598:
    // 0x19e598: 0xae800774  sw          $zero, 0x774($s4)
    ctx->pc = 0x19e598u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1908), GPR_U32(ctx, 0));
label_19e59c:
    // 0x19e59c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x19e59cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_19e5a0:
    // 0x19e5a0: 0xae800874  sw          $zero, 0x874($s4)
    ctx->pc = 0x19e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2164), GPR_U32(ctx, 0));
label_19e5a4:
    // 0x19e5a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e5a8:
    // 0x19e5a8: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x19e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_19e5ac:
    // 0x19e5ac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19e5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19e5b0:
    // 0x19e5b0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_19e5b4:
    if (ctx->pc == 0x19E5B4u) {
        ctx->pc = 0x19E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5B0u;
        // 0x19e5b4: 0x233a021  addu        $s4, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5B8u;
        goto label_19e5b8;
    }
    ctx->pc = 0x19E5B0u;
    {
        const bool branch_taken_0x19e5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5B0u;
        // 0x19e5b4: 0x233a021  addu        $s4, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5b0) {
            ctx->pc = 0x19E570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e570;
        }
    }
    ctx->pc = 0x19E5B8u;
label_19e5b8:
    // 0x19e5b8: 0xc063e14  jal         func_18F850
label_19e5bc:
    if (ctx->pc == 0x19E5BCu) {
        ctx->pc = 0x19E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5B8u;
        // 0x19e5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5C0u;
        goto label_19e5c0;
    }
    ctx->pc = 0x19E5B8u;
    SET_GPR_U32(ctx, 31, 0x19E5C0u);
    ctx->pc = 0x19E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5B8u;
    // 0x19e5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19E5B8u, 0x19E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5C0u;
label_19e5c0:
    // 0x19e5c0: 0x1000006d  b           . + 4 + (0x6D << 2)
label_19e5c4:
    if (ctx->pc == 0x19E5C4u) {
        ctx->pc = 0x19E5C8u;
        goto label_19e5c8;
    }
    ctx->pc = 0x19E5C0u;
    {
        const bool branch_taken_0x19e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5c0) {
            ctx->pc = 0x19E778u;
            goto label_19e778;
        }
    }
    ctx->pc = 0x19E5C8u;
label_19e5c8:
    // 0x19e5c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e5cc:
    // 0x19e5cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19e5ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e5d0:
    // 0x19e5d0: 0x10000025  b           . + 4 + (0x25 << 2)
label_19e5d4:
    if (ctx->pc == 0x19E5D4u) {
        ctx->pc = 0x19E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5D0u;
        // 0x19e5d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5D8u;
        goto label_19e5d8;
    }
    ctx->pc = 0x19E5D0u;
    {
        const bool branch_taken_0x19e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5D0u;
        // 0x19e5d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5d0) {
            ctx->pc = 0x19E668u;
            goto label_19e668;
        }
    }
    ctx->pc = 0x19E5D8u;
label_19e5d8:
    // 0x19e5d8: 0x2322821  addu        $a1, $s1, $s2
    ctx->pc = 0x19e5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_19e5dc:
    // 0x19e5dc: 0x8ca30874  lw          $v1, 0x874($a1)
    ctx->pc = 0x19e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2164)));
label_19e5e0:
    // 0x19e5e0: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_19e5e4:
    if (ctx->pc == 0x19E5E4u) {
        ctx->pc = 0x19E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5E0u;
        // 0x19e5e4: 0x24b30874  addiu       $s3, $a1, 0x874 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 2164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5E8u;
        goto label_19e5e8;
    }
    ctx->pc = 0x19E5E0u;
    {
        const bool branch_taken_0x19e5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5E0u;
        // 0x19e5e4: 0x24b30874  addiu       $s3, $a1, 0x874 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 2164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5e0) {
            ctx->pc = 0x19E65Cu;
            goto label_19e65c;
        }
    }
    ctx->pc = 0x19E5E8u;
label_19e5e8:
    // 0x19e5e8: 0x8ca40674  lw          $a0, 0x674($a1)
    ctx->pc = 0x19e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1652)));
label_19e5ec:
    // 0x19e5ec: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19e5f0:
    // 0x19e5f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19e5f4:
    // 0x19e5f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19e5f8:
    // 0x19e5f8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19e5fc:
    // 0x19e5fc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_19e600:
    // 0x19e600: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_19e604:
    if (ctx->pc == 0x19E604u) {
        ctx->pc = 0x19E608u;
        goto label_19e608;
    }
    ctx->pc = 0x19E600u;
    {
        const bool branch_taken_0x19e600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e600) {
            ctx->pc = 0x19E654u;
            goto label_19e654;
        }
    }
    ctx->pc = 0x19E608u;
label_19e608:
    // 0x19e608: 0x8ca30774  lw          $v1, 0x774($a1)
    ctx->pc = 0x19e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
label_19e60c:
    // 0x19e60c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19e610:
    // 0x19e610: 0xaca30774  sw          $v1, 0x774($a1)
    ctx->pc = 0x19e610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1908), GPR_U32(ctx, 3));
label_19e614:
    // 0x19e614: 0x8ca30974  lw          $v1, 0x974($a1)
    ctx->pc = 0x19e614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2420)));
label_19e618:
    // 0x19e618: 0x8ca40774  lw          $a0, 0x774($a1)
    ctx->pc = 0x19e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
label_19e61c:
    // 0x19e61c: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x19e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_19e620:
    // 0x19e620: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x19e620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19e624:
    // 0x19e624: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_19e628:
    if (ctx->pc == 0x19E628u) {
        ctx->pc = 0x19E62Cu;
        goto label_19e62c;
    }
    ctx->pc = 0x19E624u;
    {
        const bool branch_taken_0x19e624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e624) {
            ctx->pc = 0x19E654u;
            goto label_19e654;
        }
    }
    ctx->pc = 0x19E62Cu;
label_19e62c:
    // 0x19e62c: 0xc04bf44  jal         func_12FD10
label_19e630:
    if (ctx->pc == 0x19E630u) {
        ctx->pc = 0x19E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E62Cu;
        // 0x19e630: 0x24a40974  addiu       $a0, $a1, 0x974 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E634u;
        goto label_19e634;
    }
    ctx->pc = 0x19E62Cu;
    SET_GPR_U32(ctx, 31, 0x19E634u);
    ctx->pc = 0x19E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E62Cu;
    // 0x19e630: 0x24a40974  addiu       $a0, $a1, 0x974 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x19E62Cu, 0x19E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E634u;
label_19e634:
    // 0x19e634: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x19e634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19e638:
    // 0x19e638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e63c:
    // 0x19e63c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e640:
    // 0x19e640: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19e640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19e644:
    // 0x19e644: 0x320f809  jalr        $t9
label_19e648:
    if (ctx->pc == 0x19E648u) {
        ctx->pc = 0x19E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E644u;
        // 0x19e648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E64Cu;
        goto label_19e64c;
    }
    ctx->pc = 0x19E644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E64Cu);
        ctx->pc = 0x19E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E644u;
        // 0x19e648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E644u, 0x19E64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E64Cu;
label_19e64c:
    // 0x19e64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e650:
    // 0x19e650: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x19e650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_19e654:
    // 0x19e654: 0x0  nop
    ctx->pc = 0x19e654u;
    // NOP
label_19e658:
    // 0x19e658: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19e658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e65c:
    // 0x19e65c: 0x0  nop
    ctx->pc = 0x19e65cu;
    // NOP
label_19e660:
    // 0x19e660: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x19e660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_19e664:
    // 0x19e664: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19e664u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19e668:
    // 0x19e668: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x19e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_19e66c:
    // 0x19e66c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x19e66cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19e670:
    // 0x19e670: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_19e674:
    if (ctx->pc == 0x19E674u) {
        ctx->pc = 0x19E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E670u;
        // 0x19e674: 0x2322821  addu        $a1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E678u;
        goto label_19e678;
    }
    ctx->pc = 0x19E670u;
    {
        const bool branch_taken_0x19e670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E670u;
        // 0x19e674: 0x2322821  addu        $a1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e670) {
            ctx->pc = 0x19E5DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e5dc;
        }
    }
    ctx->pc = 0x19E678u;
label_19e678:
    // 0x19e678: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
label_19e67c:
    if (ctx->pc == 0x19E67Cu) {
        ctx->pc = 0x19E680u;
        goto label_19e680;
    }
    ctx->pc = 0x19E678u;
    {
        const bool branch_taken_0x19e678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e678) {
            ctx->pc = 0x19E778u;
            goto label_19e778;
        }
    }
    ctx->pc = 0x19E680u;
label_19e680:
    // 0x19e680: 0xc063e14  jal         func_18F850
label_19e684:
    if (ctx->pc == 0x19E684u) {
        ctx->pc = 0x19E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E680u;
        // 0x19e684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E688u;
        goto label_19e688;
    }
    ctx->pc = 0x19E680u;
    SET_GPR_U32(ctx, 31, 0x19E688u);
    ctx->pc = 0x19E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E680u;
    // 0x19e684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19E680u, 0x19E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E688u;
label_19e688:
    // 0x19e688: 0x1000003b  b           . + 4 + (0x3B << 2)
label_19e68c:
    if (ctx->pc == 0x19E68Cu) {
        ctx->pc = 0x19E690u;
        goto label_19e690;
    }
    ctx->pc = 0x19E688u;
    {
        const bool branch_taken_0x19e688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e688) {
            ctx->pc = 0x19E778u;
            goto label_19e778;
        }
    }
    ctx->pc = 0x19E690u;
label_19e690:
    // 0x19e690: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x19e690u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e694:
    // 0x19e694: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x19e694u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e698:
    // 0x19e698: 0x10000025  b           . + 4 + (0x25 << 2)
label_19e69c:
    if (ctx->pc == 0x19E69Cu) {
        ctx->pc = 0x19E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E698u;
        // 0x19e69c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6A0u;
        goto label_19e6a0;
    }
    ctx->pc = 0x19E698u;
    {
        const bool branch_taken_0x19e698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E698u;
        // 0x19e69c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e698) {
            ctx->pc = 0x19E730u;
            goto label_19e730;
        }
    }
    ctx->pc = 0x19E6A0u;
label_19e6a0:
    // 0x19e6a0: 0x2329821  addu        $s3, $s1, $s2
    ctx->pc = 0x19e6a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_19e6a4:
    // 0x19e6a4: 0xc04bf44  jal         func_12FD10
label_19e6a8:
    if (ctx->pc == 0x19E6A8u) {
        ctx->pc = 0x19E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6A4u;
        // 0x19e6a8: 0x26640974  addiu       $a0, $s3, 0x974 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6ACu;
        goto label_19e6ac;
    }
    ctx->pc = 0x19E6A4u;
    SET_GPR_U32(ctx, 31, 0x19E6ACu);
    ctx->pc = 0x19E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6A4u;
    // 0x19e6a8: 0x26640974  addiu       $a0, $s3, 0x974 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x19E6A4u, 0x19E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6ACu;
label_19e6ac:
    // 0x19e6ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19e6acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e6b0:
    // 0x19e6b0: 0x12c0001c  beqz        $s6, . + 4 + (0x1C << 2)
label_19e6b4:
    if (ctx->pc == 0x19E6B4u) {
        ctx->pc = 0x19E6B8u;
        goto label_19e6b8;
    }
    ctx->pc = 0x19E6B0u;
    {
        const bool branch_taken_0x19e6b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e6b0) {
            ctx->pc = 0x19E724u;
            goto label_19e724;
        }
    }
    ctx->pc = 0x19E6B8u;
label_19e6b8:
    // 0x19e6b8: 0x8e620874  lw          $v0, 0x874($s3)
    ctx->pc = 0x19e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2164)));
label_19e6bc:
    // 0x19e6bc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_19e6c0:
    if (ctx->pc == 0x19E6C0u) {
        ctx->pc = 0x19E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6BCu;
        // 0x19e6c0: 0x26740874  addiu       $s4, $s3, 0x874 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 2164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6C4u;
        goto label_19e6c4;
    }
    ctx->pc = 0x19E6BCu;
    {
        const bool branch_taken_0x19e6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6BCu;
        // 0x19e6c0: 0x26740874  addiu       $s4, $s3, 0x874 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 2164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6bc) {
            ctx->pc = 0x19E6ECu;
            goto label_19e6ec;
        }
    }
    ctx->pc = 0x19E6C4u;
label_19e6c4:
    // 0x19e6c4: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x19e6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e6c8:
    // 0x19e6c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19e6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19e6cc:
    // 0x19e6cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e6d0:
    // 0x19e6d0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19e6d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19e6d4:
    // 0x19e6d4: 0x320f809  jalr        $t9
label_19e6d8:
    if (ctx->pc == 0x19E6D8u) {
        ctx->pc = 0x19E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6D4u;
        // 0x19e6d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6DCu;
        goto label_19e6dc;
    }
    ctx->pc = 0x19E6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E6DCu);
        ctx->pc = 0x19E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6D4u;
        // 0x19e6d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6D4u, 0x19E6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E6DCu;
label_19e6dc:
    // 0x19e6dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e6e0:
    // 0x19e6e0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19e6e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e6e4:
    // 0x19e6e4: 0x1000000f  b           . + 4 + (0xF << 2)
label_19e6e8:
    if (ctx->pc == 0x19E6E8u) {
        ctx->pc = 0x19E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E4u;
        // 0x19e6e8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6ECu;
        goto label_19e6ec;
    }
    ctx->pc = 0x19E6E4u;
    {
        const bool branch_taken_0x19e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E4u;
        // 0x19e6e8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6e4) {
            ctx->pc = 0x19E724u;
            goto label_19e724;
        }
    }
    ctx->pc = 0x19E6ECu;
label_19e6ec:
    // 0x19e6ec: 0x0  nop
    ctx->pc = 0x19e6ecu;
    // NOP
label_19e6f0:
    // 0x19e6f0: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x19e6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e6f4:
    // 0x19e6f4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x19e6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_19e6f8:
    // 0x19e6f8: 0x320f809  jalr        $t9
label_19e6fc:
    if (ctx->pc == 0x19E6FCu) {
        ctx->pc = 0x19E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6F8u;
        // 0x19e6fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E700u;
        goto label_19e700;
    }
    ctx->pc = 0x19E6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E700u);
        ctx->pc = 0x19E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6F8u;
        // 0x19e6fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6F8u, 0x19E700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E700u;
label_19e700:
    // 0x19e700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e704:
    // 0x19e704: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_19e708:
    if (ctx->pc == 0x19E708u) {
        ctx->pc = 0x19E70Cu;
        goto label_19e70c;
    }
    ctx->pc = 0x19E704u;
    {
        const bool branch_taken_0x19e704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19e704) {
            ctx->pc = 0x19E71Cu;
            goto label_19e71c;
        }
    }
    ctx->pc = 0x19E70Cu;
label_19e70c:
    // 0x19e70c: 0xc04be08  jal         func_12F820
label_19e710:
    if (ctx->pc == 0x19E710u) {
        ctx->pc = 0x19E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E70Cu;
        // 0x19e710: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E714u;
        goto label_19e714;
    }
    ctx->pc = 0x19E70Cu;
    SET_GPR_U32(ctx, 31, 0x19E714u);
    ctx->pc = 0x19E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E70Cu;
    // 0x19e710: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x19E70Cu, 0x19E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E714u;
label_19e714:
    // 0x19e714: 0x10000003  b           . + 4 + (0x3 << 2)
label_19e718:
    if (ctx->pc == 0x19E718u) {
        ctx->pc = 0x19E71Cu;
        goto label_19e71c;
    }
    ctx->pc = 0x19E714u;
    {
        const bool branch_taken_0x19e714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e714) {
            ctx->pc = 0x19E724u;
            goto label_19e724;
        }
    }
    ctx->pc = 0x19E71Cu;
label_19e71c:
    // 0x19e71c: 0x0  nop
    ctx->pc = 0x19e71cu;
    // NOP
label_19e720:
    // 0x19e720: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19e720u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e724:
    // 0x19e724: 0x0  nop
    ctx->pc = 0x19e724u;
    // NOP
label_19e728:
    // 0x19e728: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x19e728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_19e72c:
    // 0x19e72c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19e72cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_19e730:
    // 0x19e730: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x19e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_19e734:
    // 0x19e734: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x19e734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19e738:
    // 0x19e738: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_19e73c:
    if (ctx->pc == 0x19E73Cu) {
        ctx->pc = 0x19E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E738u;
        // 0x19e73c: 0x2329821  addu        $s3, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E740u;
        goto label_19e740;
    }
    ctx->pc = 0x19E738u;
    {
        const bool branch_taken_0x19e738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E738u;
        // 0x19e73c: 0x2329821  addu        $s3, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e738) {
            ctx->pc = 0x19E6A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e6a4;
        }
    }
    ctx->pc = 0x19E740u;
label_19e740:
    // 0x19e740: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
label_19e744:
    if (ctx->pc == 0x19E744u) {
        ctx->pc = 0x19E748u;
        goto label_19e748;
    }
    ctx->pc = 0x19E740u;
    {
        const bool branch_taken_0x19e740 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e740) {
            ctx->pc = 0x19E778u;
            goto label_19e778;
        }
    }
    ctx->pc = 0x19E748u;
label_19e748:
    // 0x19e748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e74c:
    // 0x19e74c: 0xc063e08  jal         func_18F820
label_19e750:
    if (ctx->pc == 0x19E750u) {
        ctx->pc = 0x19E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E74Cu;
        // 0x19e750: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E754u;
        goto label_19e754;
    }
    ctx->pc = 0x19E74Cu;
    SET_GPR_U32(ctx, 31, 0x19E754u);
    ctx->pc = 0x19E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E74Cu;
    // 0x19e750: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19E74Cu, 0x19E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E754u;
label_19e754:
    // 0x19e754: 0x10000008  b           . + 4 + (0x8 << 2)
label_19e758:
    if (ctx->pc == 0x19E758u) {
        ctx->pc = 0x19E75Cu;
        goto label_19e75c;
    }
    ctx->pc = 0x19E754u;
    {
        const bool branch_taken_0x19e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e754) {
            ctx->pc = 0x19E778u;
            goto label_19e778;
        }
    }
    ctx->pc = 0x19E75Cu;
label_19e75c:
    // 0x19e75c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19e760:
    if (ctx->pc == 0x19E760u) {
        ctx->pc = 0x19E764u;
        goto label_19e764;
    }
    ctx->pc = 0x19E75Cu;
    {
        const bool branch_taken_0x19e75c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e75c) {
            ctx->pc = 0x19E778u;
            goto label_19e778;
        }
    }
    ctx->pc = 0x19E764u;
label_19e764:
    // 0x19e764: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19e764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19e768:
    // 0x19e768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e76c:
    // 0x19e76c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19e76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19e770:
    // 0x19e770: 0x320f809  jalr        $t9
label_19e774:
    if (ctx->pc == 0x19E774u) {
        ctx->pc = 0x19E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E770u;
        // 0x19e774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E778u;
        goto label_19e778;
    }
    ctx->pc = 0x19E770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E778u);
        ctx->pc = 0x19E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E770u;
        // 0x19e774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E770u, 0x19E778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E778u;
label_19e778:
    // 0x19e778: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19e778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19e77c:
    // 0x19e77c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19e77cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19e780:
    // 0x19e780: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19e780u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19e784:
    // 0x19e784: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19e784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19e788:
    // 0x19e788: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19e788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19e78c:
    // 0x19e78c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19e78cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19e790:
    // 0x19e790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19e794:
    // 0x19e794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19e798:
    // 0x19e798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19e79c:
    // 0x19e79c: 0x3e00008  jr          $ra
label_19e7a0:
    if (ctx->pc == 0x19E7A0u) {
        ctx->pc = 0x19E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E79Cu;
        // 0x19e7a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7A4u;
        goto label_fallthrough_0x19e79c;
    }
    ctx->pc = 0x19E79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E79Cu;
        // 0x19e7a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19e79c:
    ctx->pc = 0x19E7A4u;
}
