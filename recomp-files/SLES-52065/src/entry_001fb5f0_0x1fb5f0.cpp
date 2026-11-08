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

// Function: entry_001fb5f0
// Address: 0x1fb5f0 - 0x1fb68c
void entry_001fb5f0_0x1fb5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb5f0_0x1fb5f0");
#endif

    ctx->pc = 0x1fb5f0u;

    // 0x1fb5f0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fb5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fb5f4: 0x24624d88  addiu       $v0, $v1, 0x4D88
    ctx->pc = 0x1fb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19848));
    // 0x1fb5f8: 0xc4694d88  lwc1        $f9, 0x4D88($v1)
    ctx->pc = 0x1fb5f8u;
    { uint32_t bits = FAST_READ32(0x224D88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1fb5fc: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x1fb5fcu;
    { uint32_t bits = FAST_READ32(0x224DB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fb600: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x1fb600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x1fb604: 0xc4450020  lwc1        $f5, 0x20($v0)
    ctx->pc = 0x1fb604u;
    { uint32_t bits = FAST_READ32(0x224DA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fb608: 0xc4440024  lwc1        $f4, 0x24($v0)
    ctx->pc = 0x1fb608u;
    { uint32_t bits = FAST_READ32(0x224DACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fb60c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1fb60cu;
    { uint32_t bits = FAST_READ32(0x224DA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb610: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1fb610u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1fb614: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x1fb614u;
    { uint32_t bits = FAST_READ32(0x224DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1fb618: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x1fb618u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1fb61c: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x1fb61cu;
    { uint32_t bits = FAST_READ32(0x224D9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fb620: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x1fb620u;
    { uint32_t bits = FAST_READ32(0x224D98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1fb624: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x1fb624u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x1fb628: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x1fb628u;
    { uint32_t bits = FAST_READ32(0x224D90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1fb62c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1fb62cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1fb630: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1fb630u;
    { uint32_t bits = FAST_READ32(0x224D94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fb634: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1fb634u;
    { uint32_t bits = FAST_READ32(0x224D8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fb638: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x1fb638u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1fb63c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1fb63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb640: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x1fb640u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1fb644: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1fb644u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1fb648: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x1fb648u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1fb64c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1fb64cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1fb650: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x1fb650u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x1fb654: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1fb654u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1fb658: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x1fb658u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1fb65c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1fb65cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1fb660: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x1fb660u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x1fb664: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x1fb664u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1fb668: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x1fb668u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1fb66c: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x1fb66cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1fb670: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x1fb670u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x1fb674: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB674u;
    {
        const bool branch_taken_0x1fb674 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB674u;
        // 0x1fb678: 0x46095002  mul.s       $f0, $f10, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb674) {
            ctx->pc = 0x1FB68Cu;
            return;
        }
    }
    ctx->pc = 0x1FB67Cu;
    // 0x1fb67c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb67cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fb680: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1fb680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1fb684: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FB684u;
    {
        const bool branch_taken_0x1fb684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB684u;
        // 0x1fb688: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb684) {
            ctx->pc = 0x1FB6CCu;
            return;
        }
    }
    ctx->pc = 0x1FB68Cu;
}
