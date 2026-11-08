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

// Function: entry_001fa598
// Address: 0x1fa598 - 0x1fa648
void entry_001fa598_0x1fa598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa598_0x1fa598");
#endif

    ctx->pc = 0x1fa598u;

    // 0x1fa598: 0x3c01ad47  lui         $at, 0xAD47
    ctx->pc = 0x1fa598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44359 << 16));
    // 0x1fa59c: 0x3421d74e  ori         $at, $at, 0xD74E
    ctx->pc = 0x1fa59cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55118);
    // 0x1fa5a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa5a4: 0x3c01310f  lui         $at, 0x310F
    ctx->pc = 0x1fa5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12559 << 16));
    // 0x1fa5a8: 0x342174f6  ori         $at, $at, 0x74F6
    ctx->pc = 0x1fa5a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29942);
    // 0x1fa5ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa5b0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1fa5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1fa5b4: 0x3c01b493  lui         $at, 0xB493
    ctx->pc = 0x1fa5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46227 << 16));
    // 0x1fa5b8: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x1fa5b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
    // 0x1fa5bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fa5bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fa5c0: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x1fa5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x1fa5c4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1fa5c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa5c8: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x1fa5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
    // 0x1fa5cc: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x1fa5ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x1fa5d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa5d4: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x1fa5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
    // 0x1fa5d8: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1fa5d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x1fa5dc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fa5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fa5e0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fa5e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fa5e4: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1fa5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1fa5e8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1fa5e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1fa5ec: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1fa5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1fa5f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fa5f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fa5f4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1fa5f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa5f8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1fa5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1fa5fc: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1fa5fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa600: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fa600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fa604: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1fa604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa608: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1fa608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1fa60c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1fa60cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa610: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1fa610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1fa614: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FA614u;
    {
        const bool branch_taken_0x1fa614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA614u;
        // 0x1fa618: 0x46003042  mul.s       $f1, $f6, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa614) {
            ctx->pc = 0x1FA648u;
            return;
        }
    }
    ctx->pc = 0x1FA61Cu;
    // 0x1fa61c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1fa61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1fa620: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fa620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fa624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa628: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x1fa628u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1fa62c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fa62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa630: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fa630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fa634: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1fa634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fa638: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1fa638u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1fa63c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fa63cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1fa640: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA640u;
        // 0x1fa644: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA648u;
}
